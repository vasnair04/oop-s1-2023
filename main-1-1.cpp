#include <iostream>

extern int *readNumbers();
extern void printNumbers(int *numbers,int length);

int main(){;
  int length = 10;
  int number[10] = {0};
  int *ptr = number;
  ptr = readNumbers();
  printNumbers(ptr,length);
  return 0;
}