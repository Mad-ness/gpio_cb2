#include <stdio.h>
#include "gpio.h"

int main() {
    gpioInit();

    printf("Pin %d state %d\n", PIN_PI11, digitalRead(PIN_PI11));
    digitalWrite(PIN_PI11, HIGH);
    printf("pin %d state %d\n", PIN_PI11, digitalRead(PIN_PI11));
    digitalWrite(PIN_PI11, LOW);
    printf("pin %d state %d\n", PIN_PI11, digitalRead(PIN_PI11));

    gpioCleanup();
    return 0;
}

