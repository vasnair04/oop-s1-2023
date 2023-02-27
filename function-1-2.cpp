#include <iostream>

double array_mean(int array[], int n) {
  double array_mean = 0;
  double sum = 0;
  double count = n;
  if (n<1) {
    array_mean = 0.0;
    return array_mean;
  } 
  else {
      for (int i=0;i<n;i++) {
    sum = sum + array[i];
  }
  array_mean = sum/count;
  return array_mean;
  }
}