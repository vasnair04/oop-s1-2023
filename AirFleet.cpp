#include "AirFleet.h"

AirFleet::AirFleet(){
  fleet[0] = new AirCraft[5];
  Airplane A1(20,10);
  Helicopter H1(10000, "BlackHawk");
  AirCraft A2(5000);
  Helicopter H2(100,"WhiteHawk");
  Airplane A3(15,20);
  fleet[0] = &A1;
  fleet[1] = &H1;
  fleet[2] = &A2;
  fleet[3] = &H2;
  fleet[4] = &A3;
}

AirCraft** AirFleet::get_fleet(){
  return fleet;
}

AirFleet::~AirFleet(){
  delete fleet;
}

