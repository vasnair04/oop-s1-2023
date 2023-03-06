#include <iostream>

bool is_palindrome(int integers[], int length) {
  int end = length-1;
  int start = 0;
    int midpoint = length/2;
    int palin = 1;
    while (palin == 1&&start!=midpoint) {
      if (integers[start]!=integers[end]){
        palin = 0;
      } else {
        end--;
        start++;
      }
    }
    return palin;
}

int sum_array_elements(int integers[], int length) {
  int sum = 0;
  for (int i=0;i<length;i++) {
    sum = sum + integers[i];
  }
  return sum;
}


int sum_if_palindrome(int integers[], int length) {
  if (length<1) {
    return -1;
  }
  if (is_palindrome(integers,length)==0) {
    return -2;
  }
  return sum_array_elements(integers,length);
}