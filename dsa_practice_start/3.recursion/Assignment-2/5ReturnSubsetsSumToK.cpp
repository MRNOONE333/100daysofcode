// Problem Statement 5: Return subsets sum to K
// Problem Level: HARD
// Problem Description:
// Given an array A of size n and an integer K, return all subsets of A which sum to K.
// Subsets are of length varying from 0 to n, that contain elements of the array. But the order of elements should remain same as in the input array.
// Note : The order of subsets are not important.
// Input format :
// Line 1 : Integer n, Size of input array
// Line 2 : Array elements separated by space
// Line 3 : K

// Constraints :
// 1 <= n <= 20

// Sample Input :
// 9 
// 5 12 3 17 1 18 15 3 17 
// 6

// Sample Output :
// 3 3
// 5 1


#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> subsetsSumKHelper(int arr[], int n, int k, vector<int>& subset, int sum, int index) {
    vector<vector<int>> result;

    // If the current subset has the desired sum, add it to the result
    if (sum == k) {
        result.push_back(subset);
    }

    // Generate all subsets that include the current element
    for (int i = index; i < n; i++) {
        // Include the current element in the subset
        subset.push_back(arr[i]);

        // Recursively generate subsets starting from the next index
        vector<vector<int>> subsets = subsetsSumKHelper(arr, n, k, subset, sum + arr[i], i + 1);

        // Add the generated subsets to the result
        result.insert(result.end(), subsets.begin(), subsets.end());

        // Exclude the current element from the subset (backtrack)
        subset.pop_back();
    }

    return result;
}

vector<vector<int>> subsetsSumK(int arr[], int n, int k) {
    vector<int> subset;
    return subsetsSumKHelper(arr, n, k, subset, 0, 0);
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

    vector<vector<int>> result = subsetsSumK(arr, n, k);

    cout << "Subsets with sum equal to " << k << " are:" << endl;
    for (const vector<int>& subset : result) {
        for (int num : subset) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
