#ifndef AIRFLEET_H
#define AIRFLEET_H
#include "AirCraft.h"
#include "Helicopter.h"
#include "Airplane.h"

class AirFleet {
  private:
    AirCraft **fleet;
  public:
    AirFleet();
    AirCraft **get_fleet();
    ~AirFleet();
};



#endif