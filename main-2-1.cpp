#include <iostream>

extern void print_binary_str(std::string decimal_number);

int main() {
  char decimal_number[3] = "13";
  print_binary_str(decimal_number);
}