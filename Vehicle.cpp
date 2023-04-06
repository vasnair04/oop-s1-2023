#include "Vehicle.h"
#include <iostream>


Vehicle::Vehicle() {
  timeOfEntry = clock();
  ID = 0;
}

Vehicle::Vehicle(int ID): ID(ID) {
  timeOfEntry = clock();
}

int Vehicle::get_ID(){
  return ID;
}

int Vehicle::getParkingDuration(){
  int seconds = clock() - timeOfEntry;
  return seconds;
}

Vehicle::~Vehicle(){

}
