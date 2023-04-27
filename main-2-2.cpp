#include <iostream>
#include "Airplane.h"

using namespace std;

int main(){
  Airplane A1(5000,100);
  A1.set_fuel(95);
  A1.fly(65,120);
  cout << "Airplane has " << A1.get_fuel() << "'%' fuel left " << A1.get_numberOfFlights() << endl;
  return 0;
}