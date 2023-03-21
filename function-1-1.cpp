#include <iostream>
#include "Person.h"

person* createPersonArray(int n) {
  person* ppl = new person[n];
  for (int i=0;i<n;i++) {
    ppl[i].age = 0;
    ppl[i].name = "John Doe";
  }
  return ppl;
}

