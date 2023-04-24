#include "Appliance.h"
#include <iostream>

Appliance::Appliance(){
  powerRating = 0;
  isOn = 0;
}

Appliance::Appliance(int powerRting){
  powerRating = powerRting;
  isOn = 0;
}

double Appliance::get_PowerConsumption(){
  return 0;
}

void Appliance::turnOn(){
  isOn = 1;
}

void Appliance::turnOff(){
  isOn = 0;
}

