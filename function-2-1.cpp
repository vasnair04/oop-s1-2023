#include <iostream>

using namespace std;

int *readNumbers() { 
  int *array = new int[10];
  for (int i=0;i<10;i++) {
    cin >> array[i];
  }
  return array;
  delete array; 
} 

void printNumbers(int *numbers,int length) {
  for (int i=0;i<length;i++) {
    cout << i << " " << numbers[i] << endl;
  }
  return;
}

void hexDigits(int *numbers,int length) {
  char hex[2] = {'0'};
  for (int i=0;i<length;i++) {
    switch (numbers[i]) {
      case 0:
        hex[0] = '0';
        break;
      case 1:
        hex[0] = '1';
        break;
      case 2:
        hex[0] = '2';
        break;
      case 3:
        hex[0] = '3';
        break;
      case 4:
        hex[0] = '4';
        break;
      case 5:
        hex[0] = '5';
        break;
      case 6:
        hex[0] = '6';
        break;
      case 7:
        hex[0] = '7';
        break;
      case 8:
        hex[0] = '8';
        break;
      case 9:
        hex[0] = '9';
        break;
      case 10:
        hex[0] = 'A';
        break;
      case 11:
        hex[0] = 'B';
        break;
      case 12:
        hex[0] = 'C';
        break;
      case 13:
        hex[0] = 'D';
        break;
      case 14:
        hex[0] = 'E';
        break;
      case 15:
        hex[0] = 'F';
      default:
        hex[0] = ' ';
    }
    cout << i << " " << numbers[i] << " " << hex << endl;
  }
  return;
}