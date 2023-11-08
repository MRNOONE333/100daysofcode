#include <iostream>
using namespace std;

int arraySum(int arr[], int size) {
    if (size == 0) {
        return 0;
    }
    return arr[size - 1] + arraySum(arr, size - 1);
}

int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

    int sum = arraySum(myArray, arraySize);

    cout << "Sum of the elements in the array: " << sum << endl;

    return 0;
}
