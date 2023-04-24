#include <iostream>
#include "TV.h"

using namespace std;

int main(){
  TV t1(100,12.1);
  cout << t1.get_PowerConsumption() << endl;
}

