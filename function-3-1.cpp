#include <iostream>

bool is_fanarray(int array[], int n) {
  int front = 0;
  int back = n-1;
  int even_check = 0;
  int status = 1;
  if (n<1) {
    return 0;
  }
  if (n%2==0) {
    even_check = 1;
  } 
  // for even arrays
  if (even_check == 1) {
    while (front <= (n/2) && status == 1) {
      if (array[front]==array[back]) {
        status = 1;
        front++;
        back--;
      } else {
        status = 0;
      }
    }
  } else {
      while (front <= ((n-1)/2) && status == 1) {
        if (array[front]==array[back]) {
          status = 1;
          front++;
          back--;
        } else {
          status = 0;
      }  
    }
  }
  return status;
}