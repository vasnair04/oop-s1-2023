#include "Utils.h"
#include <stdlib.h>
#include <math.h>

std::tuple<int,int> Utils::generateRandomPos(int GridWidth,int GridHeight){
  std::tuple<int,int> pos(int xpos,int ypos);
  int xpos1;
  int ypos1;
  xpos1 = std::rand() % GridWidth;
  ypos1 = std::rand() % GridHeight;
  
  return pos;
}

double Utils::calculateDistance(std::tuple<int,int> pos1, std::tuple<int,int> pos2){
  double xdist = pos1<0> - pos2<0>;
  double ydist = pos1<1> - pos2<1>;
  double distance = sqrt(xdist*xdist+*ydist*ydist);
  return distance;
}