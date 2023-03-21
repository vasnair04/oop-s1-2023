#include <iostream>
#include "Person.h"

extern PersonList createPersonList(int n);

int main(){
  createPersonList(4);
  return 0;
}