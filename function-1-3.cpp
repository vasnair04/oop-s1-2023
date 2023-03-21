#include <iostream>
#include "Person.h"

PersonList deepCopyPersonList(PersonList p1) {
  PersonList p2;
  int n = p1.numPeople;
  p2.numPeople = n;
  for (int i=n;i>0;i--) {
    p2.people[i].age = p1.people[i].age;
    p2.people[i].name = p1.people[i].name;
  }
  return p2;
}