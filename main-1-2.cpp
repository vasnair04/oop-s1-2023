#include <iostream>

extern int is_identity(int array[10][10]);

using namespace std;

int main(){
  int array[10][10] = {0};
  for (int i=0;i<10;i++) {
    for (int j = 0;j<10;j++) {
      if (i==j) {
        array[i][j] = 1;
      }
    }
  }
  cout << is_identity(array) << endl;

  return 0;
}