#include <unistd.h>
#include <stdio.h>
#include <string.h>

#include "py/mpconfig.h"

//#include "esp_log.h"
//#include "esp_system.h"
// #include "driver/uart.h"

/*
 * Core UART functions to implement for a port
 */

#if MICROPY_MIN_USE_STM32_MCU
typedef struct {
    volatile uint32_t SR;
    volatile uint32_t DR;
} periph_uart_t;
#define USART1 ((periph_uart_t *)0x40011000)
#endif

// Receive single character
int mp_hal_stdin_rx_chr(void) {
    unsigned char c = 0;
    scanf("%c",&c);
    // Convert new lines to cr
    if (c == 0x0a) c=0x0d;
    return c;
}

// Send string of given length
void mp_hal_stdout_tx_strn(const char *str, mp_uint_t len) {
    char buf[len+1];
    strncpy(buf, str, len);
    buf[len]='\0';
    printf(buf);
 }
