#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

class ParkingLot {
  protected:
  int max;
  Vehicle* vehicles = new Vehicle[max];
  int maxduration;
  public:
  int* counter = new int[1];
  ParkingLot();
  ParkingLot(int max);
  int getCount();
  void parkVehicle(Vehicle* parking);
  void unparkVehicle(int ID); 
  void maxParkingDuration(int seconds);
  int countOverstayingVehicles(int maxduration2);
  ~ParkingLot();
};


#endif