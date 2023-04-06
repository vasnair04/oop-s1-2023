#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle() {
  timeOfEntry = time(0);
  ID = 0;
}

Vehicle::Vehicle(int ID): ID(ID) {
  timeOfEntry = time(NULL);
}

int Vehicle::get_ID(){
  return ID;
}

int Vehicle::getParkingDuration(){
  return 0;
}

Vehicle::~Vehicle(){

}
