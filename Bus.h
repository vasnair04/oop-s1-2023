#ifndef BUS_H
#define BUS_H
#include "Vehicle.h"

class Bus : public Vehicle {
  public:
  Bus();
  Bus(int ID);
  int getParkingDuration();
  ~Bus();
};

#endif