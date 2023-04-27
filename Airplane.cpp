#include "Airplane.h"


Airplane::Airplane(){
  this->weight = 0;
  this->fuel = 100;
  this->numberOfFlights = 0;
  numPassengers = 0;
}

Airplane::Airplane(int w, int p){
  this->weight = w;
  this->fuel = 100;
  this->numberOfFlights = 0;
  numPassengers = p;
}

void Airplane::reducePassengers(int x){
  numPassengers = numPassengers - x;
  if (numPassengers<0){
    numPassengers = 0;
  }
}

int Airplane::get_numPassengers(){
  return numPassengers;
}

void Airplane::fly(int headwind, int minutes){
  int holdfuel = fuel;
  float fuelPerMin = 0;
  if (headwind>60) {
    fuelPerMin = fuelPerMin + 0.5;
  } else {
    fuelPerMin = fuelPerMin + 0.3;
  }
  fuelPerMin = fuelPerMin + (numPassengers*0.001);
  fuel = fuel - (fuelPerMin*minutes);
  if (fuel<0) {
    fuel = 0;
  }
  this->numberOfFlights++;
  if (fuel<20){
    this->fuel=holdfuel;
    this->numberOfFlights--;
  }
}

void Airplane::set_numPassengers(int p){
  numPassengers = p;
}