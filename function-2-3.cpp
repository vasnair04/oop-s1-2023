#include <iostream>

void two_five_nine(int array[], int n) {
  int twos = 0;
  int fives = 0;
  int nines = 0;
  int counter = 0;
  if (n<1) {
    return twos,fives,nines;
  } else {
    while (counter!=n) {
      switch () {
        case 2:
          counter++;
          twos++;
          break;
        case 5:
          counter++;
          fives++;
          break;
        case 9:
          counter++;
          nines++;
          break;
        default:
        counter++
      }
    }
  }
  return twos,fives,nines;
}