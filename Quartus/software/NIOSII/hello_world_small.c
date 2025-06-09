#include "sys/alt_stdio.h"
#include "sys/alt_irq.h"
#include "altera_avalon_pio_regs.h"
#include <unistd.h>

#define HEX_DISPLAY_BASE 0x4840
#define BUTTON_BASE 0x4820
#define BUTTON_IRQ 2

volatile int pause_pressed = 0;
volatile int next_pressed = 0;
volatile int prev_pressed = 0;
volatile int last_button_state = 0xF;

unsigned char hex_table_custom[10] = {
    0x40, // 0
    0x79, // 1
    0x24, // 2
    0x30, // 3
    0x19, // 4
    0x12, // 5
    0x02, // 6
    0x78, // 7
    0x80, // 8
    0x10  // 9
};

void button_interrupt_handler(void* context, alt_u32 id) {
    // Desactivar interrupciones para evitar retrigger inmediato
    IOWR_ALTERA_AVALON_PIO_IRQ_MASK(BUTTON_BASE, 0x0);

    unsigned int button_state = IORD_ALTERA_AVALON_PIO_DATA(BUTTON_BASE);
    unsigned int changes = last_button_state & (~button_state);

    if (changes & 0x2) {
        next_pressed = 1;
        alt_putstr("Botón SIGUIENTE presionado\n");
    }
    if (changes & 0x4) {
        pause_pressed = !pause_pressed;
        alt_putstr("Botón PLAY/PAUSE presionado\n");
    }
    if (changes & 0x8) {
        prev_pressed = 1;
        alt_putstr("Botón ANTERIOR presionado\n");
    }

    last_button_state = button_state;

    // Esperar que se suelten los botones para evitar múltiples interrupciones
    while ((IORD_ALTERA_AVALON_PIO_DATA(BUTTON_BASE) & 0xE) != 0xE) {
        usleep(1000);
    }

    // Reactivar interrupciones
    IOWR_ALTERA_AVALON_PIO_IRQ_MASK(BUTTON_BASE, 0xF);
}

void configurar_interrupciones() {
    // Limpiar flags e interrupciones antes de empezar
    IOWR_ALTERA_AVALON_PIO_IRQ_MASK(BUTTON_BASE, 0x0);
    IOWR_ALTERA_AVALON_PIO_EDGE_CAP(BUTTON_BASE, 0xF);  // Limpiar

    // Registrar ISR
    alt_irq_register(BUTTON_IRQ, NULL, button_interrupt_handler);

    // Esperar que botones estén sueltos al inicio para no disparar interrupciones
    while ((IORD_ALTERA_AVALON_PIO_DATA(BUTTON_BASE) & 0xE) != 0xE);

    last_button_state = IORD_ALTERA_AVALON_PIO_DATA(BUTTON_BASE);

    alt_putstr("=== Antes mask ===\n");

    // Activar interrupciones de botones
    IOWR_ALTERA_AVALON_PIO_IRQ_MASK(BUTTON_BASE, 0xF);

    alt_putstr("=== Despues mask ===\n");
}

int main() {
    volatile unsigned int * hex_display_ptr = (unsigned int *) HEX_DISPLAY_BASE;

    alt_putstr("=== Timer mm:ss con Pausa ===\n");

    configurar_interrupciones();

    alt_putstr("=== Despues de configurar ===\n");

    int minutes = 0;
    int seconds = 0;

    while (1) {
        // Mostrar tiempo en formato mm:ss
        int min_tens = minutes / 10;
        int min_units = minutes % 10;
        int sec_tens = seconds / 10;
        int sec_units = seconds % 10;

        unsigned int display_value =
            (hex_table_custom[sec_units] & 0x7F) |           // HEX0
            ((hex_table_custom[sec_tens] & 0x7F) << 7) |     // HEX1
            ((hex_table_custom[min_units] & 0x7F) << 14) |   // HEX2
            ((hex_table_custom[min_tens] & 0x7F) << 21);     // HEX3

        *hex_display_ptr = display_value;

        alt_printf("Tiempo: %02d:%02d\n", minutes, seconds);

        if (!pause_pressed) {
            seconds++;
            if (seconds >= 60) {
                seconds = 0;
                minutes++;
            }
            if (minutes >= 100) {
                minutes = 0;
                seconds = 0;
                alt_putstr("*** Reiniciando a 00:00 ***\n");
            }
        } else {
            alt_putstr("== Pausado ==\n");
        }

        usleep(1000000); // Esperar 1 segundo
    }

    return 0;
}
