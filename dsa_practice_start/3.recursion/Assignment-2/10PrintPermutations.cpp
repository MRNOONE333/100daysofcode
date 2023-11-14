// Problem Statement 10:  Print Permutations
// Problem Level: MEDIUM
// Problem Description:
// Given an input string (STR), find and return all possible permutations of the input string.
// Note:
// The input string may contain the same characters, so there will also be the same permutations.
// The order of permutations doesn’t matter.

// Input Format:
// The only input line contains a string (STR) of alphabets in lower case

// Output Format:
// Print each permutations in a new line

// Note:
// You do not need to print anything, it has already been taken care of. Just implement the function.

// Constraint:
// 1<=length of STR<=8
// Time Limit: 1sec

// Sample Input 1:
// cba

// Sample Output 1:
// abc
// acb
// bac
// bca
// cab
// cba

#include <iostream>
#include <string>

using namespace std;

void getPermutations(string s, int startIndex) {
    if (startIndex == s.length()) {
        cout << s << endl;
        return;
    }

    for (int i = startIndex; i < s.length(); ++i) {
        swap(s[startIndex], s[i]);  // Fix character at the current position.
        getPermutations(s, startIndex + 1);  // Recursively find permutations for the remaining substring.
        swap(s[startIndex], s[i]);  // Backtrack to restore the original string.
    }
}

int main() {
    string input;
    cout << "Enter the string: ";
    cin >> input;

    cout << "All permutations:" << endl;
    getPermutations(input, 0);

    return 0;
}
