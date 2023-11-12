
// Problem Statement 6: Print Subset Sum to K
// Problem Level: HARD
// Problem Description:
// Given an array A and an integer K, print all subsets of A which sum to K.
// Subsets are of length varying from 0 to n, that contain elements of the array. But the order of elements should remain same as in the input array.
// Note : The order of subsets are not important. Just print them in different lines.
// Input format :
// Line 1 : Size of input array
// Line 2 : Array elements separated by space
// Line 3 : K

// Sample Input:
// 9 
// 5 12 3 17 1 18 15 3 17 
// 6

// Sample Output:
// 3 3
// 5 1


#include <iostream>
#include <vector>

using namespace std;

void printSubsetsSumKHelper(int arr[], int n, int k, vector<int>& subset, int sum, int index) {
    // If the current subset has the desired sum, print it
    if (sum == k) {
        for (int i : subset) {
            cout << i << " ";
        }
        cout << endl;
    }

    // Generate all subsets that include the current element
    for (int i = index; i < n; i++) {
        // Include the current element in the subset
        subset.push_back(arr[i]);

        // Recursively generate subsets starting from the next index
        printSubsetsSumKHelper(arr, n, k, subset, sum + arr[i], i + 1);

        // Exclude the current element from the subset (backtrack)
        subset.pop_back();
    }
}

void printSubsetsSumK(int arr[], int n, int k) {
    vector<int> subset;
    printSubsetsSumKHelper(arr, n, k, subset, 0, 0);
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array elements separated by space: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the value of K: ";
    cin >> k;

    cout << "Subsets with sum equal to " << k << " are:" << endl;
    printSubsetsSumK(arr, n, k);

    return 0;
}
