#include <iostream>

bool is_array_palindrome(int integers[], int length) {
  int end = length;
  int start = 0;
  int status = 1;
  while (status == 1 && start != length/2) {
    if (integers[end-1] != integers[start]) {
      status = 0;
    } else {
      end--;
      start++;
    }
  }
  return status;
}

int sum_integers(int integers[], int length) {
  int sum = 0;
  for (int i=0;i<length;i++) {
    sum = sum + integers[i];
  }
  return sum;
}

int palindrome_sum(int integers[], int length) {
  if (length<1) {
    return -1;
  }
  if (is_array_palindrome(integers,length)==0) {
    return -2;
  } else {
    return (sum_integers(integers, length));
  }
}