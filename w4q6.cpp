#include <iostream>
using namespace std;

// function to find the smallest element in an array of doubles
double min(double array[], int size) {
    // initialize the minimum element as the first element of the array
    double min = array[0];
    // iterate through the rest of the array
    for (int i = 1; i < size; i++) {
        // if current element is less than the minimum element, update the minimum element
        if (array[i] < min) {
            min = array[i];
        }
    }
    // return the final minimum element
    return min;
}

int main() {
    int size;
    double arr[] = {4.3, 3.2, 4.1, 2.5, 0.8};
    size = sizeof(arr) / sizeof(arr[0]);
    cout << "The smallest element in the array is: " << min(arr, size) << endl;
    return 0;
}
