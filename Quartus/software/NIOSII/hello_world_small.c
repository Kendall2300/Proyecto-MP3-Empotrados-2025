#include "sys/alt_stdio.h"
#include "sys/alt_irq.h"
#include "altera_avalon_pio_regs.h"
#include <unistd.h>

#define HEX_DISPLAY_BASE 0x4850
#define BUTTON_BASE 0x4830
#define BUTTON_IRQ 2

volatile int pause_toggle = 0;
volatile int next_pressed = 0;
volatile int prev_pressed = 0;

unsigned char hex_table_custom[10] = {
    0x40, 0x79, 0x24, 0x30, 0x19,
    0x12, 0x02, 0x78, 0x80, 0x10
};

void button_interrupt_handler(void* context, alt_u32 id) {
    unsigned int edge_capture = IORD_ALTERA_AVALON_PIO_EDGE_CAP(BUTTON_BASE);

    if (edge_capture & 0x2) {
        next_pressed = 1;
    }
    if (edge_capture & 0x4) {
        pause_toggle = 1;
    }
    if (edge_capture & 0x8) {
        prev_pressed = 1;
    }

    IOWR_ALTERA_AVALON_PIO_EDGE_CAP(BUTTON_BASE, 0xF); // Limpiar edge capture
}

void configurar_interrupciones() {
    IOWR_ALTERA_AVALON_PIO_EDGE_CAP(BUTTON_BASE, 0xF);
    alt_irq_register(BUTTON_IRQ, NULL, button_interrupt_handler);
    IOWR_ALTERA_AVALON_PIO_IRQ_MASK(BUTTON_BASE, 0xE); // bits 1,2,3
}

int main() {
    volatile unsigned int *hex_display_ptr = (unsigned int *) HEX_DISPLAY_BASE;

    alt_putstr("=== Timer mm:ss con Pausa ===\n");

    int minutes = 0;
    int seconds = 0;
    int paused = 0;

    configurar_interrupciones();

    while (1) {
        if (pause_toggle) {
            paused = !paused;
            pause_toggle = 0;
            if (paused)
                alt_putstr("== Pausado ==\n");
            else
                alt_putstr("== Reanudado ==\n");
        }

        if (prev_pressed) {
            minutes = 0;
            seconds = 0;
            alt_putstr("== Reiniciado a 00:00 ==\n");
            prev_pressed = 0;
        }

        if (next_pressed) {
            minutes = 0;
            seconds = 0;
            alt_putstr("== Siguiente canción iniciada ==\n");
            next_pressed = 0;
        }

        if (!paused) {
            int min_tens = minutes / 10;
            int min_units = minutes % 10;
            int sec_tens = seconds / 10;
            int sec_units = seconds % 10;

            unsigned int display_value =
                (hex_table_custom[sec_units] & 0x7F) |
                ((hex_table_custom[sec_tens] & 0x7F) << 7) |
                ((hex_table_custom[min_units] & 0x7F) << 14) |
                ((hex_table_custom[min_tens] & 0x7F) << 21);

            *hex_display_ptr = display_value;

            usleep(1000000);
            seconds++;
            if (seconds >= 60) {
                seconds = 0;
                minutes++;
            }
            if (minutes >= 100) {
                minutes = 0;
                seconds = 0;
                alt_putstr("*** Reinicio automático ***\n");
            }
        } else {
            usleep(100000);
        }
    }

    return 0;
}
