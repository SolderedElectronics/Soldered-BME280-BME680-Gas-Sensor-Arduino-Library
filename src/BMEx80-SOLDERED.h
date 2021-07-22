/**
 **************************************************
 *
 * @file        BMEx80-SOLDERED.h
 * @brief       Header file for BMEx80-SOLDERED board
 *
 *
 * @copyright GNU General Public License v3.0
 * @authors     Zvonimir Haramustek for Soldered.com
 ***************************************************/

#ifndef __SENSOR__
#define __SENSOR__

#include "Arduino.h"
#include "libs/BME680/src/Zanshin_BME680.h"
#include "libs/Generic-easyC/easyC.h"

class BME280 : public EasyC
{
  public:
  protected:
    void initializeNative(){};

  private:
};

class BME680 : public BME680_Class
{
  public:
    void begin();

    float readTemperature();
    float readPressure();
    float readHumidity();
    float readAltitude();
    float readGasResistance();
    void readSensorData(float &temp, float &humidity, float &pressure, float &gas);

    float calculateAltitude(float pressure);

  protected:
    void initializeNative(){};

  private:
};

#endif
