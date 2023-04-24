#ifndef FRIDGE_H
#define FRIDGE_H
#include "Applicance.h"

class Fridge : public Appliance {
  private:
    double volume;
  public:
    Fridge();
    Fridge(int Powerating,double volume);
    void setVolume(double volume);
    double getVolume();
    double getPowerConsumption();
};

#endif