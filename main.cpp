/**
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stdio.h>
#include "pico/stdlib.h"
#include <vector>
#include <string>

using namespace std;

#include "pico/stdlib.h"
#include "hardware/pio.h"
#include "hardware/clocks.h"

#include "ws2812.pio.h"

#include "WS2812.cpp"

#define IS_RGBW true
#define NUM_PIXELS 2

#ifdef PICO_DEFAULT_WS2812_PIN
#define WS2812_PIN PICO_DEFAULT_WS2812_PIN
#else
// default to pin 2 if the board doesn't have a default WS2812 pin defined
#define WS2812_PIN 2
#endif

int main() {
    stdio_init_all();
    sleep_ms(1000);
    printf("Pico Color sensor, via Luca's pain and suffering \n");
    sleep_ms(100);
    ws28121 stripfar(true, 3, 3);
    sleep_ms(100);
    ws28120 stripclose(true, 3, 2);
    sleep_ms(100);


}
