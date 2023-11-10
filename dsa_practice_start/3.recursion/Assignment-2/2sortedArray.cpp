// Using resursion in cpp-
// Given an integer sorted array (sorted in increasing order) and an element x, find the x in given array using binary search. Return the index of x.
// Return -1 if x is not present in the given array.
// Note : If given array size is even, take first mid.
// Input format :
// Line 1 : Array size
// Line 2 : Array elements (separated by space)
// Line 3 : x (element to be searched)

// Sample Input :
// 6
// 2 3 4 5 6 8 
// 5

// Sample Output:
// 3

#include<iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int x) {
    if (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            return mid; // Element found, return its index
        } else if (arr[mid] > x) {
            return binarySearch(arr, low, mid - 1, x); // Search in the left half
        } else {
            return binarySearch(arr, mid + 1, high, x); // Search in the right half
        }
    }

    return -1; // Element not found
}

int main() {
    int size, x;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the sorted array elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to be searched: ";
    cin >> x;

    int result = binarySearch(arr, 0, size - 1, x);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
