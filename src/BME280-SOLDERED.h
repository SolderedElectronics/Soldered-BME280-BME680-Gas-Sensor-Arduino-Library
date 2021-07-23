/**
 **************************************************
 *
 * @file        BME680-SOLDERED.h
 * @brief       Header file for BME680-SOLDERED board
 *
 *
 * @copyright GNU General Public License v3.0
 * @authors     Zvonimir Haramustek for Soldered.com
 ***************************************************/

#ifndef __SENSOR__
#define __SENSOR__

#include "Arduino.h"
#include "libs/BME280/src/BME280.h"
#include "libs/Generic-easyC/easyC.h"

class BME280 : public BME280_Class
{
  public:
    void begin();

    float readTemperature();
    float readPressure();
    float readHumidity();
    float readAltitude();
    float readGasResistance();
    void readSensorData(float &temp, float &humidity, float &pressure);

    float calculateAltitude(float pressure);

  protected:
    void initializeNative(){};

  private:
};

#endif
