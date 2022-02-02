/*
  GPSDO.cpp - Library for handling GPSDO namespace
  Created by Paweł 'felixd' Wojciechowski, Janury 30, 2022.
*/

#include "GPSDO.h"

double calculateSD(double data[]) {
  double sum = 0.0, mean, standardDeviation = 0.0;
  int i;

  for (double x : data) {
    sum += x;
  }

  mean = sum / 10;

  for (double x : data) {
    standardDeviation += pow(x - mean, 2);
  }

  return sqrt(standardDeviation / 10);
}
