#include <iostream>

int count_evens(int number) {
  int count_evens = 0;
  if (number<1) {
    return 0;
  }
  for (int i=0;i<number;i++) {
    if (i%2==0) {
      count_evens++;
    }
  }

  return count_evens;
}