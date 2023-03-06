#include <iostream>
#include <cmath>


int main() {
  int binary1[90] = {1,1,0,1};
  int binary2[90] = {1,1,0,1};
  int result[90] = {0};
  int carry = 0;
  int carrynum = 0;
  
  for (int i = 0;i<4;i++) {
    if ((binary1[i]+binary2[i]+carry)==0) {
      result[i+carrynum] = 0;
    } else if ((binary1[i]+binary2[i]+carry)==1) {
      result[i+carrynum] = 1;
    } else if ((binary1[i]+binary2[i]+carry)==2) {
      result[i+carrynum] = 0;
      carry = 1;
      carrynum++;
    } else {
      result[i+carrynum] = 1;
      carry = 1;
      carrynum++;
    }
  }

  for (int i=0;i<4+carrynum;i++) {
    printf("%d",result[i]);
  }

  printf("\n");
  
  return 0;
}