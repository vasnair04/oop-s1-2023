#include <iostream>

bool is_ascending(int array[], int n) {
  int state = 1; 
  int counter = 0;
  if (n<0) {
    return 0;
  } else {
    while (state == 1 && counter != (n-1)) {
      if (array[counter] <= array[counter+1]) {
        state = 1;
        counter++;
      } else {
        state = 0;
      }
    }
  }
  if (state == 0) {
    return 0;
  } else {
    return 1;
  }
}