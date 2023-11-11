// Problem Statement: Return subset of an array
// Problem Level: HARD
// Problem Description:
// Given an integer array (of length n), find and return all the subsets of input array.
// Subsets are of length varying from 0 to n, that contain elements of the array. But the order of elements should remain same as in the input array.
// Note : The order of subsets are not important.
// Input format :
// Line 1 : Size of array
// Line 2 : Array elements (separated by space)

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

vector<vector<int>> subsetsHelper(int input[], int n, int index) {
    // Base case: an empty subset
    if (index == n) {
        return {{}};
    }

    // Recursive call to get subsets without the current element
    vector<vector<int>> smallOutput = subsetsHelper(input, n, index + 1);

    // Include the current element in subsets
    vector<vector<int>> output;
    for (auto subset : smallOutput) {
        output.push_back(subset); // subset without the current element
        subset.push_back(input[index]);
        output.push_back(subset); // subset with the current element
    }

    return output;
}

vector<vector<int>> subsets(int input[], int n) {
    return subsetsHelper(input, n, 0);
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

    vector<vector<int>> result = subsets(input, n);

    cout << "Subsets of the array are:" << endl;
    for (auto subset : result) {
        cout << "[ ";
        for (int i = 0; i < subset.size(); i++) {
            cout << subset[i];
            if (i < subset.size() - 1) {
                cout << " ";
            }
        }
        cout << "]" << endl;
    }

    return 0;
}
