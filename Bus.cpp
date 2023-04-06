#include "Bus.h"
#include "ParkingLot.h"

Bus::Bus(): Vehicle::Vehicle() {}

Bus::Bus(int ID): Vehicle::Vehicle(ID) {}

int Bus::getParkingDuration(){
  int seconds;
  seconds = time(0) - timeOfEntry;
  seconds = seconds*0.75;
  return seconds;
}

Bus::~Bus() {

}