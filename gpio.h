#ifndef __GPIO_H__
#define __GPIO_H__

#include "gpio_lib.h"

#ifndef HIGH
    #define HIGH  1
#endif 
#ifndef LOW
    #define LOW   0
#endif

#if defined(__LINUX_2__)
#define gpioInit() sunxi_gpio_init()
#define gpioCleanup() sunxi_gpio_cleanup()
#define digitalWrite(pin, value) sunxi_gpio_output(pin, value)
#define digitalRead(pin) sunxi_gpio_input(pin)
//#define pinMode(pin, direction) gpio.open(pin, direction)
#endif

#endif // __GPIO_H__

