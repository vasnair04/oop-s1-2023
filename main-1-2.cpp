#include <iostream>
#include <iomanip>

extern double array_mean(int array[], int n);

int main() {
    int array[5] = {4,5,6,7,9};
    std::cout << std::setprecision(2) << array_mean(array, 0) << std::endl;
    return 0;
}