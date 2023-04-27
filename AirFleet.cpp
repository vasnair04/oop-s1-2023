#include "AirFleet.h"

AirFleet::AirFleet(){
  fleet = new AirCraft*[5];
  Airplane A1(20,10);
  Airplane* p1 = &A1;
  Helicopter H1(10000, "BlackHawk");
  Helicopter* p2 = &H1;
  AirCraft A2(5000);
  AirCraft* p3 = &A2;
  Helicopter H2(100,"WhiteHawk");
  Helicopter *p4 = &H2;
  Airplane A3(15,20);
  Airplane *p5 = &A3;
  fleet[0] = p1;
  fleet[1] = p2;
  fleet[2] = p3;
  fleet[3] = p4;
  fleet[4] = p5;  
}

AirCraft** AirFleet::get_fleet(){
  return fleet;
}

AirFleet::~AirFleet(){
  delete fleet ;
}

