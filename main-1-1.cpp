#include <iostream>
#include "person.h"

extern Person* createPersonArray(int n);

int main() {
  int n = 4;
  createPersonArray(n);
  return 0;
}