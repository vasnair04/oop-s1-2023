#include "Car.h"

Car::Car(): Vehicle::Vehicle() {}

Car::Car(int ID): Vehicle::Vehicle(ID) {}


int Car::getParkingDuration(){
  int seconds;
  seconds = timeOfEntry - time(0);
  seconds = seconds*0.9;
  return seconds;
}

Car::~Car() {

}