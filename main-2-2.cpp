#include <iostream>

extern int bin_to_int(int binary_digits[], int number_of_digits);

using namespace std;

int main() {
  int binary_digits[4] = {1,1,0,1};
  int number_of_digits = 4;
  cout << bin_to_int(binary_digits, number_of_digits) << endl;
  return 0;
}