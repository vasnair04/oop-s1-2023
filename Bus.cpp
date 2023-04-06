#include "Bus.h"

Bus::Bus(): Vehicle::Vehicle() {}

Bus::Bus(int ID): Vehicle::Vehicle(ID) {}

int Bus::getParkingDuration(){
  int seconds;
  seconds = timeOfEntry - time(0);
  seconds = seconds*0.75;
  return seconds;
}

Bus::~Bus() {

}