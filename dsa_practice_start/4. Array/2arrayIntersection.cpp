// Problem Statement: Array Intersection
// Problem Level: MEDIUM
// Problem Description:
// You have been given two integer arrays/list(ARR1 and ARR2) of size N and M, respectively. You need to print their intersection; An intersection for this problem can be defined when both the arrays/lists contain a particular value or to put it in other words, when there is a common value that exists in both the arrays/lists.
// Note :
// Input arrays/lists can contain duplicate elements.

// The intersection elements printed would be in the order they appear in the first sorted array/list(ARR1).

// Input format :
// The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// The first line of each test case or query contains an integer 'N' representing the size of the first array/list.

// The second line contains 'N' single space separated integers representing the elements of the first the array/list.

// The third line contains an integer 'M' representing the size of the second array/list.

// The fourth line contains 'M' single space separated integers representing the elements of the second array/list.

// Output format :
// For each test case, print the intersection elements in a row, separated by a single space.

// Output for every test case will be printed in a separate line.

// Constraints :
// 1 <= t <= 10^2
// 0 <= N <= 10^6
// 0 <= M <= 10^6

// Time Limit: 1 sec

// Sample Input 1 :
// 2
// 6
// 2 6 8 5 4 3
// 4
// 2 3 4 7 
// 2
// 10 10
// 1
// 10

// Sample Output 1 :
// 2 3 4
// 10

// Sample Input 2 :
// 1
// 4
// 2 6 1 2
// 5
// 1 2 3 4 2

// Sample Output 2 :
// 1 2 2


#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

void printIntersection(const vector<int>& arr1, const vector<int>& arr2) {
    unordered_map<int, int> freqMap;

    // Count frequency of elements in arr1
    for (int num : arr1) {
        freqMap[num]++;
    }

    // Traverse arr2 and print the common elements
    for (int num : arr2) {
        if (freqMap.find(num) != freqMap.end() && freqMap[num] > 0) {
            cout << num << " ";
            freqMap[num]--;
        }
    }

    cout << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr1(n);
        for (int i = 0; i < n; i++) {
            cin >> arr1[i];
        }

        int m;
        cin >> m;

        vector<int> arr2(m);
        for (int i = 0; i < m; i++) {
            cin >> arr2[i];
        }

        // Sort arr1 to print elements in order of appearance
        sort(arr1.begin(), arr1.end());

        printIntersection(arr1, arr2);
    }

    return 0;
}
