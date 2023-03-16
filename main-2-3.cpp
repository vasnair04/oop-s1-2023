#include <iostream>

extern int palindrome_sum(int integers[], int length);

using namespace std;

int main(){
  int integers[5] = {5,2,1,2,5};
  int length = 5;
  cout << palindrome_sum(integers, length) << endl;
  return 0;
}