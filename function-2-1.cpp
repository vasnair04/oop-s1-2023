#include <iostream>

int min_element(int array[], int n) {
  int min_element = array[0];
  if (n<1) {
    min_element = 0;
    return min_element;
  } else {
    for (int i=0;i<n;i++) {
      if (array[i]<min_element) {
        min_element = array[i];
      }
    }
    return min_element;
  }
}