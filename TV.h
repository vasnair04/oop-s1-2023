#ifndef TV_H
#define TV_H
#include "Applicance.h"

class TV : public Appliance{
  private:
    double screenSize;
  public:
  TV();
  TV(int powerRating, double screenSize);
  void setScreenSize(double screenSiz);
  double getScreenSize();
  double getPowerConsumption(); 
};

#endif