#include "Helicopter.h"

Helicopter::Helicopter(){
  this->weight = 0;
  this->fuel = 100;
  this->numberOfFlights = 0;
  name = "";
}

Helicopter::Helicopter(int w,string nam){
  this->weight = w;
  this->fuel = 100;
  this->numberOfFlights = 0;
  name = nam;
}

void Helicopter::fly(int headwind, int minutes){
  int holdfuel = fuel;
  float fuelPerMin = 0;
  if (headwind>40) {
    fuelPerMin = fuelPerMin + 0.4;
  } else {
    fuelPerMin = fuelPerMin + 0.2;
  }
  if (this->weight>5670){
    fuelPerMin = fuelPerMin + ((this->weight-5670)*0.01);
  }
  fuel = fuel - (fuelPerMin*minutes);
  if (fuel<0) {
    fuel = 0;
  }
  this->numberOfFlights++;
  if (fuel<20){
    this->fuel = holdfuel;
    this->numberOfFlights--;
  }
}

string Helicopter::get_name(){
  return name;
}

void Helicopter::set_name(string nam){
  name = nam;
}