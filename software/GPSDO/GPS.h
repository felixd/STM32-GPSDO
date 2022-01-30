//
/*
  GPS.h - Library for handling GPS
  Created by Paweł 'felixd' Wojciechowski, Janury 30, 2022.
*/
#include "Arduino.h"

#ifndef GPSDO_GPS_h
#define GPSDO_GPS_h

/*
    get library here > http://arduiniana.org/libraries/tinygpsplus/
*/
#include <TinyGPS++.h>

namespace gpsdo {

class GPS : public TinyGPSPlus {
  public:
    int fixTime;
};

};
#endif
