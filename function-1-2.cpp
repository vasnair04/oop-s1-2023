#include <iostream>

int is_identity(int array[10][10]) {
  int status = 0;
  int points = 0;
  int real = 0;
  for (int row=0;row<10;row++) {
    for (int col=0;col<10;col++) {
      if (col==row) {
        real++;
        if (array[row][col]==1){
          points++;
        } else {
          points--;
        } 
      } else {
        if (array[row][col]!=0) {
          points--;
        }
      }
    }
  }
  if (points==real) {
    status = 1;
  }
  return status;
}