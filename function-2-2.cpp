#include <iostream>

int max_element(int array[], int n) {
  int max_element = array[0];
  if (n<1) {
    max_element = 0;
    return max_element;
  } else {
    for (int i=0;i<n;i++) {
      if (array[i]>max_element) {
        max_element = array[i];
      }
    }
    return max_element;
  }
}