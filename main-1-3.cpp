#include <iostream>

extern int num_count(int array[], int n, int number);

int main() {
    int array[5] = {4,5,5,7,9};
    int number = 5;
    int n = 5;
    std::cout << num_count(array, n, number) << std::endl;
    return 0;
}