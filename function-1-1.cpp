#include <iostream>

int array_sum(int array[], int n) {
  int array_sum = 0;
  if (n <= 0) {
    return array_sum;
  } 
  else {
    for (int i = 0 ; i < n; i++) {
      array_sum = array_sum + array[i];
    }
    return array_sum;
  }
}
