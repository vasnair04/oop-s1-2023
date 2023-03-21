#include <iostream>
#include "Person.h"

PersonList createPersonList(int n) {
  PersonList persons;
  person ppl[n];
  persons.people = ppl;
  persons.numPeople = n;
  for (int i=0;i<n;i++) {
    persons.people[i].age = 1;
    persons.people[i].name = "Jane Doe";
  }
  return persons;
}