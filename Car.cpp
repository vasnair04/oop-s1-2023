#include "Car.h"
#include "ParkingLot.h"

Car::Car(): Vehicle::Vehicle() {}

Car::Car(int ID): Vehicle::Vehicle(ID) {}


int Car::getParkingDuration(){
  int seconds;
  seconds = time(0) - timeOfEntry;
  int seconds_scaled = seconds*0.9;
  return seconds_scaled;
}

Car::~Car() {

}