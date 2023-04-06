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
  public:
  int counter = 0;
  ParkingLot();
  ParkingLot(int max);
  int getCount();
  void parkVehicle(Vehicle* parking);
  void unparkVehicle(int ID); 
  int countOverstayingVehicles(int maxParkingDuration);
  ~ParkingLot();
};


#endif