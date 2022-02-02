/*
  GPSDO.h - Library for handling GPSDO namespace
  Created by Paweł 'felixd' Wojciechowski, Janury 30, 2022.
*/

#include "Arduino.h"

#ifndef GPSDO_h
#define GPSDO_h

/*
  gpsdo::GPSDO Class
  Main GPSDO class to rule them all. ;)

  STM32F411CE : 512 Kbytes of Flash memory, 128 Kbytes of SRAM

  int32  -2.147483648         * 10^9  to  2.147483647           * 10^9    4 bytes
  int64  9.223372036854775808 * 10^18 to  9.223372036854775807  * 10^18   8 bytes

  uint32 0                            to  4.294967295           * 10^9    4 bytes [256 in 1kB]
  uint64 0                            to  1.8446744073709551615 * 10^19   8 bytes [128 in 1kB]

  36700 bytes ~~ 35 kB left

*/

class GPSDO {
  public:
    double calculateSD(double data[]);

};

#endif
