#include "Car.h"

Car::Car(): Vehicle::Vehicle() {}

Car::Car(int ID): Vehicle::Vehicle(ID) {}


int Car::getParkingDuration(){
  int seconds;
  seconds = time(0) - timeOfEntry;
  seconds = seconds*0.9;
  return seconds;
}

Car::~Car() {

}