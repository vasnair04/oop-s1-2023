#include <iostream>
#include "person.h"

PersonList deepCopyPersonList(PersonList p1) {
  PersonList p2;
  p2.numPeople = p1.numPeople;
  for (int i=0;i<p1.numPeople;i++) {
    p2.people[i] = p1.people[i];
  }
  return p2;
}