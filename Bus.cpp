#include "Bus.h"
#include "ParkingLot.h"

Bus::Bus(): Vehicle::Vehicle() {}

Bus::Bus(int ID): Vehicle::Vehicle(ID) {}

int Bus::getParkingDuration(){
  int seconds;
  seconds = difftime(clock(),timeOfEntry);
  seconds = (seconds*75)/100;
  return seconds;
}

Bus::~Bus() {

}