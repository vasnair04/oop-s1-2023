#ifndef HOUSE_H
#define HOUSE_H
#include "TV.h"
#include "Fridge.h"

class House{
  private:
  int numAppliances;
  Appliance** appliances;
  public:
  House();
  House(int numAppliances);
  int globalcount = 0;
  bool addAppliance(Appliance* appliance);
  double getTotalPowerConsumption();  
};


#endif