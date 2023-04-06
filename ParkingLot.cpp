#include "ParkingLot.h"
#include <iostream>

using namespace std;

ParkingLot::ParkingLot(): max(0) {
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

void ParkingLot::unparkVehicle(int ID){
  int status = 0;
  int count2 = 0;
  Vehicle blank();
  while (count2<max&&status==0){
    if (vehicles[count2].get_ID()==ID) {
      vehicles[count2] = 0;
      counter--;
      status = 1;
    }
  }
  if (status==0){    
    cout << "Vehicle not in the lot" << endl;
  } else {
    for (int i=count2;i<max;i++) {
      vehicles[i] = vehicles[i+1];
    }
  }
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

