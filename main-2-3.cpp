#include <iostream>

using namespace std;

extern int sum_if_palindrome(int integers[], int length);

int main() {
  int integers[6] = {1,2,3,3,2,1};
  int length = 6;
  cout << sum_if_palindrome(integers, length) << endl;
  return 0;
}