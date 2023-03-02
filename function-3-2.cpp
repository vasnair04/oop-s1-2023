#include <iostream>
#include <algorithm>

int median_array(int array[], int n) {
  // sorts numbers
  int hold = 0;
  for (int i=0;i<n;i++) {
    for (int j=i+1;j<n;j++) {
      if (array[i] > array[j]) {
        hold = array[i];
        array[i] = array[j];
        array[j] = hold;
      }
    }
  }
  // finds median 
  if (n%2==0||n<1) {
    return 0;
  } else {
    return (array[(n/2)+(1/2)]);
  }
}