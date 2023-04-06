#include "Vehicle.h"
#include <iostream>


Vehicle::Vehicle() {
  timeOfEntry = time(0);
  ID = 0;
}

Vehicle::Vehicle(int ID): ID(ID) {
  timeOfEntry = time(0);
}

int Vehicle::get_ID(){
  return ID;
}

int Vehicle::getParkingDuration(){
  int seconds;
  seconds = difftime(time(0),timeOfEntry);
  return seconds;
}

Vehicle::~Vehicle(){

}
