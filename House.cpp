#include "House.h"

House::House(){
  numAppliances = 0;
  appliances = new Appliance*[numAppliances];
} 

House::House(int numAppliance){
  numAppliances = numAppliance;
  appliances = new Appliance*[numAppliances];
}

double House::getTotalPowerConsumption(){
  double total = 0;
  double temp = 0;
  for (int i=0;i<numAppliances;i++){
    temp = appliances[i]->getPowerConsumption();
    total = total + temp;
  }
  return total;
}

bool House::addAppliance(Appliance* appliance){
  if (globalcount!=numAppliances){
    appliances[globalcount] = appliance;
    globalcount++;
    return 1;
  } else {
    return 0;
  }
}