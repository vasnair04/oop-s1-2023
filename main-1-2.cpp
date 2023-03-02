#include <iostream>
#include <iomanip>

extern double array_mean(int array[], int n);

int main() {
    int array[5] = {4,5,6,7,9};
    int n = 5;
    std::cout << std::fixed << std::setprecision(1) << array_mean(array, n) << std::endl;
    return 0;
}