#include <iostream>

void print_binary_str(std::string decimal_number) {
  int decimal = std::stoi(decimal_number);
  int index = 0;
  int stored[90] = {0};
  
  while (decimal!=0) {
    stored[index] = decimal%2;
    decimal = decimal/2;
    index++;
  }

  for (int i=index-1;i>=0;i--) {
    printf("%d",stored[i]);
  }
  printf("\n");
  return;

}