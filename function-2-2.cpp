#include <iostream>
#include <math.h>

int bin_to_int(int bianary_digits[], int number_of_digits) {
  int decimal = {0};
  int count = number_of_digits;
  for (int i = 0; i<number_of_digits; i++ ) {
    decimal = decimal + (pow(2, i))*(bianary_digits[count-1]);
    count--;
  }
  return decimal;
}