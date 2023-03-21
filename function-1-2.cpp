#include <iostream>
#include "Person.h"

PersonList createPersonList(int n) {
  PersonList Persons;
  Person* ppl = new Person[n];
  Persons.people = ppl;
  Persons.numPeople = n;
  for (int i=0;i<n;i++) {
    Persons.people[i].age = 1;
    Persons.people[i].name = "Jane Doe";
  }
  return Persons;
}