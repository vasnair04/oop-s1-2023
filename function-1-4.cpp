#include <iostream>
#include "Person.h"

PersonList shallowCopyPersonList(PersonList p1) {
  PersonList p2;
  p2.numPeople = p1.numPeople;
  *p2.people.name = *p1.people.name;
  *p2.people.age = *p1.people.age;
  return p2;
}