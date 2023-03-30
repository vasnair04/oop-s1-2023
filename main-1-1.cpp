#include <iostream>
#include "Unit.h"

using namespace std;

int main(){
  Unit u1;
  Unit u2(12000,3,400.00);

  cout << "unit values are:" << u1.get_value() << " " << u1.get_num_bedrooms() << " "
  << u1.get_area() << endl;

  cout << "unit values are:" << u2.get_value() << " " << u2.get_num_bedrooms() << " "
  << u2.get_area() << endl;
}