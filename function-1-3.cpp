#include <iostream>
#include "Person.h"

PersonList deepCopyPersonList(PersonList p1) {
  PersonList p2;
  p2.numPeople = p1.numPeople;
  for (int i=0;i<p1.numPeople;i++) {
    p2.people[i].age = p1.people[i].age;
    p2.people[i].name = p1.people[i].name;
  }
  return p2;
}