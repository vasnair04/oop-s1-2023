#ifndef FRIDGE_H
#define FRIDGE_H
#include "Appliance.h"

class Fridge : public Appliance {
  private:
    double volume;
  public:
    Fridge();
    Fridge(int Powerating,double volume);
    void set_Volume(double volume);
    double get_Volume();
    double get_PowerConsumption();
};

#endif