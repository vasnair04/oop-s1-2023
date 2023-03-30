#include <iostream>
#include "ApartmentBuilding.h"

using namespace std;

int main(){
  ApartmentBuilding A1(5);
  cout << A1.get_capacity() << endl;
  Unit u1(10,10,10.0);
  Unit u2(10,10,10.0);
  Unit u3(10,10,10.0);
  Unit u4(10,10,10.0);
  Unit u5(10,10,10.0);
  Unit u6(10,10,10.0);
  A1.add_unit(u1);
  A1.add_unit(u2);
  A1.add_unit(u3);
  cout << A1.get_current_number_of_units() << endl;
  A1.add_unit(u4);
  A1.add_unit(u5);
  cout << A1.add_unit(u6) << endl;
  return 0;
}
