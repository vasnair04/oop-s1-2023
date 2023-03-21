#include <iostream>
#include "Person.h"

PersonList shallowCopyPersonList(PersonList p1) {
  PersonList p2;
  p2.numPeople = p1.numPeople;
  Person* ptr1 = p1.people;
  p2.people = ptr1;
  return p2;
}
