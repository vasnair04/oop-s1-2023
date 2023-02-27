#include <iostream>

int count_evens(int number) {
  int count_evens = 0;
  int current = 1;
  while (number!=current) {
    if ((current%2)==0) {
      count_evens++;
      current++;
    } else {
      current++;
    }
  }
  return count_evens;
}