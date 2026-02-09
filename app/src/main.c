
#include <errno.h>
#include <string.h>
#include <zephyr/logging/log.h>
#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/drivers/spi.h>
#include <zephyr/sys/util.h>
#include "lightning_control_unit.h"

LOG_MODULE_REGISTER(main);



int main(void)
{
    lcu_init();
    while (1) {
        k_sleep(K_FOREVER);
    }
}