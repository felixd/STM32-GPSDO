/*
  Sensor_BMP280.h - Library for handling BMP280 sensor
  Created by Paweł 'felixd' Wojciechowski, Janury 31, 2022.

  BMP280 is SPI atmospheric pressure, temperature and altitude sensor
*/

#include "Arduino.h"

#ifndef GPSDO_SENSOR_BMP280_h
#define GPSDO_SENSOR_BMP280_h
#define GPSDO_SENSOR_BMP280

#include <SPI.h>
#include <Adafruit_BMP280.h>

// BMP280 - SPI
#define BMP280_CS (PA4)                                     // SPI1 uses PA4, PA5, PA6, PA7

#endif
