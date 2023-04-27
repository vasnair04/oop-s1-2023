#include "AirCraft.h"
#include <iostream>

int main(){
  AirCraft A1(100);
  std::cout << A1.get_weight() << std::endl;
  return 0;
}