#include <iostream>

void two_five_nine(int array[], int n) {
  int twos = 0;
  int fives = 0;
  int nines = 0;
  int counter = 0;
  if (n<1) {
    printf("2:%d\n5:%d\n9:%d\n",twos,fives,nines);
    return;
  } else {
    while (counter!=n) {
      switch (array[counter]) {
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
        counter++;
      }
    }
  }
  printf("2:%d;5:%d;9:%d;\n",twos,fives,nines);
  return;
}