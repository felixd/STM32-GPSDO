/*
  GPS.h - Library for handling GPS
  Created by Paweł 'felixd' Wojciechowski, Janury 30, 2022.
*/

#include "Arduino.h"

#ifndef GPSDO_GPS_h
#define GPSDO_GPS_h

// Increase HardwareSerial (UART) TX and RX buffer sizes from default 64 characters to 256.
// The main worry here is that we could miss some characters from the u-blox GPS module if
// the processor is busy doing something else (e.g. updating the display, reading a sensor, etc)
// specially since we increase the GPS baud rate from 9600 to 38400.

#define SERIAL_TX_BUFFER_SIZE 256 // Warning: > 256 could cause problems, see comments in STM32 HardwareSerial library
#define SERIAL_RX_BUFFER_SIZE 256

/*
  Optimize u-blox GPS receiver configuration
  Confirmed to be working with:
   - NEO-M6 (clone) - at least it does not affect proper working of a device
   - NEO-M8
*/
#define GPSDO_GPS_UBX_CONFIG

// TODO: To be removed ;)
//#define GPSDO_GPS_VERBOSE_NMEA  // GPS module NMEA stream echoed to USB serial xor Bluetooth serial

/*
   TinyGPS++ http://arduiniana.org/libraries/tinygpsplus/
*/
#include <TinyGPS++.h>

namespace gpsdo {

/*
   We are extending functionality of TinyGPS++
*/
class GPS : public TinyGPSPlus {
  public:
    int fixTime;
};

};

#endif
