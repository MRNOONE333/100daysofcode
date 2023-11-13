// Problem Statement 7: Return all codes - String
// Problem Level: HARD
// Problem Description:
// Assume that the value of a = 1, b = 2, c = 3, ... , z = 26. You are given a numeric string S. Write a program to return the list of all possible codes that can be generated from the given string.
// Note : The order of codes are not important. And input string does not contain 0s.
// Input format :
// A numeric string

// Constraints :
// 1 <= Length of String S <= 10

// Sample Input:
// 1123
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> getAllCodes(string input, string output) {
    if (input.empty()) {
        return {output};
    }

    int digit = input[0] - '0';
    char ch = 'a' + digit - 1;

    // urrent digit as a character in the code
    vector<string> result1 = getAllCodes(input.substr(1), output + ch);

    // current digit along with the next digit as a character in the code
    vector<string> result2;
    if (input.length() >= 2) {
        int twoDigit = stoi(input.substr(0, 2));
        if (twoDigit >= 10 && twoDigit <= 26) {
            char ch2 = 'a' + twoDigit - 1;
            result2 = getAllCodes(input.substr(2), output + ch2);
        }
    }

    // Merge the results from both cases
    result1.insert(result1.end(), result2.begin(), result2.end());

    return result1;
}

int main() {
    string input;
    cout << "Enter the numeric string: ";
    cin >> input;

    vector<string> result = getAllCodes(input, "");

    cout << "All possible codes:" << endl;
    for (const string& code : result) {
        cout << code << endl;
    }

    return 0;
}

// Sample Output:
// aabc
// kbc
// alc
// aaw
// kw

