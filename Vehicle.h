#ifndef VEHICLE_H
#define VEHICLE_H
#include <ctime>
using namespace std;

class Vehicle {
  protected:
  time_t timeOfEntry;
  int ID;
  public:
  Vehicle();
  Vehicle(int ID);
  int get_ID();
  int getParkingDuration();
  ~Vehicle();
};
#endif