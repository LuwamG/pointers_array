// a program to enter a list of numbers to array using pointers
#include <iostream>
#include "pointers_array.hpp"
using namespace std;
int main() {
    int count;
    int* arr = readNumbers(count);
    int sum = calculateSum(arr, count);
    cout << "The sum of the entered elements is: " << sum << endl;


    delete[] arr;

    return 0;
}
