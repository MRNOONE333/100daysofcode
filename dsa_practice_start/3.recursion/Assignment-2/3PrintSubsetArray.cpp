// Problem Statement: Print Subsets of Array
// Problem Level: HARD
// Problem Description:
// Given an integer array (of length n), find and print all the subsets of input array.
// Subsets are of length varying from 0 to n, that contain elements of the array. But the order of elements should remain same as in the input array.
// Note : The order of subsets are not important. Just print the subsets in different lines.
// Input format :
// Line 1 : Integer n, Size of array
// Line 2 : Array elements (separated by space)

// Constraints :
// 1 <= n <= 15

// Sample Input:
// 3
// 15 20 12

// Sample Output:
// [] (this just represents an empty array, don't worry about the square brackets)
// 12 
// 20 
// 20 12 
// 15 
// 15 12 
// 15 20 
// 15 20 12


#include <iostream>
#include <vector>

using namespace std;

void printSubsetsHelper(int input[], int n, vector<int>& output) {
    // Base cas - when the entire array is processed
    if (n == 0) {
        // Print the subset
        cout << "[ ";
        for (int i = 0; i < output.size(); i++) {
            cout << output[i];
            if (i < output.size() - 1) {
                cout << " ";
            }
        }
        cout << "]" << endl;
        return;
    }

    // Exclude the current element and move to the next one
    printSubsetsHelper(input + 1, n - 1, output);

    // Include the current element in the subset
    output.push_back(input[0]);
    printSubsetsHelper(input + 1, n - 1, output);

    // Backtrack: remove the last element to backtrack and explore other possibilities
    output.pop_back();
}

void printSubsets(int input[], int n) {
    vector<int> output;
    printSubsetsHelper(input, n, output);
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int input[15]; // Assuming maximum size as 15 (as per the problem constraint)
    cout << "Enter the array elements separated by space: ";
    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }

    cout << "Subsets of the array are:" << endl;
    printSubsets(input, n);

    return 0;
}
