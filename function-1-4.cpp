#include <iostream>
#include "person.h"

PersonList shallowCopyPersonList(PersonList p1) {
  PersonList p2;
  p2.numPeople = p1.numPeople;
  p2.people = p1.people;
  return p2;
}