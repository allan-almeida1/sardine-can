#include <Arduino.h>

#include "button.hpp"
#include "network_manager.hpp"
#include "preferences_manager.hpp"
#include "switch.hpp"

#include "soc/soc.h"
#include "soc/rtc_cntl_reg.h"

Switch sw1(15, 18); // Button pin 15, LED pin 18
Switch sw2(2, 5);   // Button pin 2, LED pin 5
Switch sw3(0, 17);  // Button pin 0, LED pin 17
Switch sw4(4, 16);  // Button pin 4, LED pin 16

NetworkManager *network_manager;

void initializationLEDSequence()
{
    sw1.turnOnLED();
    delay(200);
    sw1.turnOffLED();
    sw2.turnOnLED();
    delay(200);
    sw2.turnOffLED();
    sw3.turnOnLED();
    delay(200);
    sw3.turnOffLED();
    sw4.turnOnLED();
    delay(200);
    sw4.turnOffLED();
    delay(500);
    for (int i = 0; i < 2; i++)
    {
        sw1.turnOnLED();
        sw2.turnOnLED();
        sw3.turnOnLED();
        sw4.turnOnLED();
        delay(500);
        sw1.turnOffLED();
        sw2.turnOffLED();
        sw3.turnOffLED();
        sw4.turnOffLED();
    }
}

void setup()
{
    WRITE_PERI_REG(RTC_CNTL_BROWN_OUT_REG, 0); // disable brownout detector
    Serial.begin(115200);

    sw1.setup();
    sw2.setup();
    sw3.setup();
    sw4.setup();

    initializationLEDSequence();

    PreferencesManager preferences_manager("footswitch");
    network_manager = new NetworkManager(19, 13, &preferences_manager); // Mode button pin 19, LED pin 13
    network_manager->setupServer();
}

void loop()
{
    sw1.update();              // Update button state
    sw2.update();              // Update button state
    sw3.update();              // Update button state
    sw4.update();              // Update button state
    network_manager->update(); // Update network manager state
    delay(10);                 // Small delay to avoid busy-waiting
}
