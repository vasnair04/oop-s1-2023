#include <iostream> 

double weighted_average(int array[], int n) {
  double total = 0;
  double weight = 0;
  double counter = 0;
  double current = 0;
  if (n<1) {
    return 0;
  }
  for (int i=0;i<n;i++) {
    current = array[i];
    for (int j=0;j<n;j++) {
      if (current==array[j]) {
        counter++;
      } 
    }
    weight = (current*counter/n);
    total = total + weight;
    counter = 0;
    weight = 0;
  }
  return total;
}