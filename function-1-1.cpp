#include <iostream>
#include "Person.h"

Person* createPersonArray(int n) {
  Person* ppl = new Person[n];
  for (int i=0;i<n;i++) {
    ppl[i].age = 0;
    ppl[i].name = "John Doe";
  }
  return ppl;
}

