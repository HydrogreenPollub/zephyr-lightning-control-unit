//
// Created by inż. Dawid Pisarczyk on 28.12.2025.
//

#ifndef LIGHTNING_CONTROL_UNIT_H
#define LIGHTNING_CONTROL_UNIT_H

#include <stdint.h>
#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/logging/log.h>
#include <zephyr/drivers/led_strip.h>
#include "gpio.h"
#include "can.h"
#include "led_strip_ctrl.h"
#include "can_ids.h"

#define STRIP_NUM_PIXELS	DT_PROP(DT_ALIAS(led_strip), chain_length)

typedef struct lcu_can_t{
    const struct device *can_device;
    struct gpio_dt_spec can_tx_led;
    struct gpio_dt_spec can_rx_led;
}lcu_can_t;

typedef struct lcu_lights_t{
    const struct device *const strip;
    struct led_rgb pixels[STRIP_NUM_PIXELS];
    uint8_t lights_mask;
    uint8_t num_pixels;
}lcu_lights_t;

void lcu_init();





#endif //LIGHTNING_CONTROL_UNIT_H
