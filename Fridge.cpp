#include "Fridge.h"

Fridge::Fridge(){
  volume = 0;
  powerRating = 0;
  isOn = 0;
}

Fridge::Fridge(int powerRting, double vol){
  volume = vol;
  powerRating = powerRting;
  isOn = 0;
}

void Fridge::setVolume(double vol){
  volume = vol;
}

double Fridge::getVolume(){
  return volume;
}

double Fridge::get_PowerConsumption(){
  double powercons = 0;
  powercons = powerRating*24*(volume*0.01);
  return powercons;
}

