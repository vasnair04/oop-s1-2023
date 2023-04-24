#include "TV.h"

TV::TV(){
  powerRating = 0;
  screenSize = 0;
  isOn = 0;
}

TV::TV(int powerRtng,double screenSiz){
  powerRating = powerRtng;
  screenSize = screenSiz;
  isOn = 0;
};

void TV::setScreenSize(double screenSiz){
  screenSize = screenSiz;
}

double TV::getScreenSize(){
  return screenSize;
}

double TV::getPowerConsumption(){
  double powercons = 0;
  powercons = powerRating*(screenSize*0.1);
  return powercons;
}

