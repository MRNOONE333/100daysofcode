// Chapter Assignment
// Problem Statement 9: Return Permutations - String
// Problem Level: HARD
// Problem Description:
// Given a string S, find and return all the possible permutations of the input string.
// Note 1 : The order of permutations is not important.
// Note 2 : If original string contains duplicate characters, permutations will also be duplicates.
// Input Format :
// String S

// Output Format :
// All permutations (in different lines)

// Sample Input :
// abc

// Sample Output :
// abc
// acb
// bac
// bca
// cab
// cba


#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

void getPermutations(string s, int startIndex, unordered_set<string>& result) {
    if (startIndex == s.length()) {
        result.insert(s);
        return;
    }

    for (int i = startIndex; i < s.length(); ++i) {
        swap(s[startIndex], s[i]);  // Fix character at the current position.
        getPermutations(s, startIndex + 1, result);  // Recursively find permutations for the remaining substring.
        swap(s[startIndex], s[i]);  // Backtrack to restore the original string.
    }
}

void printPermutations(const unordered_set<string>& result) {
    for (const auto& permutation : result) {
        cout << permutation << endl;
    }
}

int main() {
    string input;
    cout << "Enter the string: ";
    cin >> input;

    unordered_set<string> result; // Using a set to store unique permutations.

    getPermutations(input, 0, result);

    cout << "All permutations:" << endl;
    printPermutations(result);

    return 0;
}
