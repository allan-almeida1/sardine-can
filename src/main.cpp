#include <Arduino.h>
#include "network_manager.hpp"
#include "soc/soc.h"
#include "soc/rtc_cntl_reg.h"

NetworkManager network_manager;

void setup()
{
    WRITE_PERI_REG(RTC_CNTL_BROWN_OUT_REG, 0); // disable brownout detector
    Serial.begin(115200);
    delay(2000);

    network_manager.setupServer();
}

void loop()
{
    network_manager.handleClient();
}
