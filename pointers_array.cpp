#include <iostream>
using namespace std;
#include "pointers_array.hpp"
// Function to read numbers into an array
int* readNumbers(int& count) {
    int input;
    count = 0;

    cout << "Enter numbers (enter -1 to stop):" << endl;
    while (true) {
        cin >> input;
        if (input == -1) {
            break;
        }
        count++;
    }

    // Create dynamic array
    int* arr = new int[count];

    cout << "Enter the numbers again:" << endl;
    int index = 0;
    while (index < count) {
        cin >> input;
        if (input == -1) {
            break;
        }
        arr[index++] = input;
    }

    return arr;
}

// Function to calculate the sum of the array elements
int calculateSum(int* arr, int count) {
    int sum = 0;
    for (int i = 0; i < count; ++i) {
        sum += arr[i];
    }
    return sum;
}

