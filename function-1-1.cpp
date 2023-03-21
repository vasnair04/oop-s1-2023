#include <iostream>
#include "Person.h"

person* createPersonArray(int n) {
  person people[n];
  for (int i=0;i<n;i++) {
    people[i].age = 0;
    people[i].name = "John Doe";
  }
  return people;
}

