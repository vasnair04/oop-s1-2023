#include "ParkingLot.h"

ParkingLot::ParkingLot(){
  max = 0;
  maxduration = 0;
}

ParkingLot::ParkingLot(int max) : max(max){
  maxduration = 0;
}

int ParkingLot::getCount(){
  return counter[0];
}

void ParkingLot::parkVehicle(Vehicle* parking){
  vehicles[getCount()] = parking[0];
}

void ParkingLot::maxParkingDuration(int seconds) {
  maxduration = seconds;
}
int ParkingLot::countOverstayingVehicles(){
  int overstayed = 0;
  for (int i=0;i<max;i++) {
    if (vehicles[i].getParkingDuration()>maxduration)
    overstayed++;
  }
  return overstayed;
}

ParkingLot::~ParkingLot(){
  delete [] vehicles;
  delete [] counter;
}

