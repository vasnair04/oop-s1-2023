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
  return counter;
}

void ParkingLot::parkVehicle(Vehicle* parking){
  if (getCount()!=max) {
  vehicles[counter] = parking[0];
  counter++;
  } else {
    cout << "The lot is full" << endl;
  }
}

void ParkingLot::unparkVehicle(int ID){
  int status = 0;
  int count2 = 0;
  Vehicle blank(0);
  while (count2<max&&status!=1){
    if (vehicles[count2].get_ID()==ID) {
      vehicles[count2] = blank;
      counter--;
      status = 1;
    } else { 
      count2++;
    }
  }
  if (status==0){    
    cout << "Vehicle not in the lot" << endl;
  } else {
    for (int i=count2;i<max-1;i++) {
      Vehicle holder = vehicles[i+1];
      vehicles[i] = holder;
    }
    int index = counter;
    vehicles[index+1] = blank;
  }
}

void ParkingLot::maxParkingDuration(int seconds) {
  maxduration = seconds;
}
int ParkingLot::countOverstayingVehicles(int maxParkingDuration){
  int overstayed = 0;
  for (int i=0;i<getCount();i++) {
    if ((vehicles[i].getParkingDuration())>(maxParkingDuration))
    overstayed++;
  }
  return overstayed;
}

ParkingLot::~ParkingLot(){
  delete [] vehicles;
}

