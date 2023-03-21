#ifndef Person
#define Person

struct person {
  std::string name;
  int age;
};

struct PersonList {
    person* people;
    int numPeople;
};

#endif