#include "Car.h"
#include "ParkingLot.h"

Car::Car(): Vehicle::Vehicle() {}

Car::Car(int ID): Vehicle::Vehicle(ID) {}


int Car::getParkingDuration(){
  int seconds;
  seconds = difftime(clock(),timeOfEntry);
  int seconds_scaled = ((seconds*90)/100);
  return seconds_scaled;
}

Car::~Car() {

}