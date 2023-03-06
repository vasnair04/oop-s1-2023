#include <iostream>
#include <cmath>

int binary_to_int(int binary_digits[], int number_of_digits) {
  int sum = 0;
  int max = number_of_digits;
  for (int i = 0;i<number_of_digits;i++) {
    sum = sum + (pow(2,(max-i))*binary_digits[i]);
  }
  sum = sum/2;
  return sum;
}