#include "Motorbike.h"

Motorbike::Motorbike(): Vehicle::Vehicle() {}

Motorbike::Motorbike(int ID): Vehicle::Vehicle(ID) {}

int Motorbike::getParkingDuration(){
  int seconds;
  seconds = time(NULL) - timeOfEntry;
  seconds = (seconds*85)/100;
  return seconds;
}

Motorbike::~Motorbike() {

}