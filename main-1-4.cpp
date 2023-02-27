#include <iostream>

extern int sum_two_arrays(int array[], int secondarray[], int n);

int main() {
    int array[5] = {4,5,5,7,9};
    int secondarray[5] = {4,5,5,7,9};
    int n = 5;
    std::cout << sum_two_arrays(array, secondarray, n) << std::endl;
    return 0;
}