#ifndef HELICOPTER_H
#define HELICOPTER_H
#include "AirCraft.h"
#include <string>
#include "time.h"

using namespace std;

class Helicopter : public AirCraft{
  private:
  string name;
  public:
  Helicopter();
  Helicopter(int w,string nam);
  void fly(int headwind, int minutes);
  string get_name();
  void set_name(string nam);
};


#endif