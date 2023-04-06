#include "Motorbike.h"

Motorbike::Motorbike(): Vehicle::Vehicle() {}

Motorbike::Motorbike(int ID): Vehicle::Vehicle(ID) {}

int Motorbike::getParkingDuration(){
  int seconds;
  seconds = time(0) - timeOfEntry;
  seconds = seconds*0.85;
  return seconds;
}

Motorbike::~Motorbike() {

}