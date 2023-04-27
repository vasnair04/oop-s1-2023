#include <iostream>
#include "Helicopter.h"

using namespace std;

int main(){
  Helicopter H1(5690,"charlie");
  H1.set_fuel(80);
  H1.fly(45,10);
  H1.fly(45,10);
  cout << H1.get_name() << " has " << H1.get_fuel() << "'%' fuel left " << H1.get_numberOfFlights() << endl;
  return 0;
}