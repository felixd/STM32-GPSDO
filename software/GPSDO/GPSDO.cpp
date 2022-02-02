/*
  GPSDO.cpp - Library for handling GPSDO namespace
  Created by Paweł 'felixd' Wojciechowski, Janury 30, 2022.
*/

#include "GPSDO.h"

double calculateSD(double data[]) {
  double sum = 0.0, mean, standardDeviation = 0.0;
  unsigned int i, data_size;

  data_size = *(&data_size + 1) - data_size; 

  for ( i = 0; i < data_size; ++i) {
    sum += data[i];
  }

  mean = sum / 10;

  for ( i = 0; i < data_size; ++i) {
    standardDeviation += pow(data[i] - mean, 2);
  }

  return sqrt(standardDeviation / 10);
}
