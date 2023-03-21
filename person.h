#ifndef person
#define person

struct Person {
  std::string name;
  int age;
};

struct PersonList {
    Person* people;
    int numPeople;
};

#endif