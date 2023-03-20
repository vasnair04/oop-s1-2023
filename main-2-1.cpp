#include <iostream>

extern int *readNumbers();
extern void hexDigits(int *numbers,int length);

int main(){
  int numbers[10] = {0};
  int *ptr = numbers;
  int length = 10;
  ptr = readNumbers();
  hexDigits(ptr,length);
  return 0;
}