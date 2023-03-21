#include <iostream>
#include "Person.h"

PersonList shallowCopyPersonList(PersonList p1) {
  PersonList p2;
  p2.numPeople = p1.numPeople;
  p2.people = new Person[p1.numPeople];
  *p2.people = *p1.people;
  return p2;
}
