/**
 * Testing bluetooth functionality.
 *
 * @copyright (c) Calliope gGmbH.
 * @author Matthias L. Jugel.
 *
 * Licensed under the Apache Software License 2.0 (ASL 2.0)
 */

#include <MicroBit.h>

static MicroBit uBit;

int main(void) {
    uBit.init();
    uBit.serial.baud(115200);
    uBit.serial.send("Calliope Bluetooth Test v1.0\n");

    while (1) {
        static uint8_t on = 0xff;
        uBit.display.image.setPixelValue(2, 2, on = !on);
        uBit.sleep(100);
    }
}