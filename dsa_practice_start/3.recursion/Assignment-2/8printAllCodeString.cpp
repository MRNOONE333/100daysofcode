// Problem Statement 8: Print all Codes - String
// Problem Level: HARD
// Problem Description:
// Assume that the value of a = 1, b = 2, c = 3, ... , z = 26. You are given a numeric string S. Write a program to print the list of all possible codes that can be generated from the given string.
// Note : The order of codes are not important. Just print them in different lines.
// Input format :
// A numeric string S

// Output Format :
// All possible codes in different lines

// Constraints :
// 1 <= Length of String S <= 10

// Sample Input:
// 1123

// Sample Output:
// aabc
// kbc
// alc
// aaw
// kw 


#include <iostream>
#include <string>
using namespace std;

void printCodes(string input, string output) {
    if (input.empty()) {
        cout << output << endl;
        return;
    }

    int digit = input[0] - '0';
    char ch = 'a' + digit - 1;

    printCodes(input.substr(1), output + ch);

    if (input.length() >= 2) {
        int twoDigit = stoi(input.substr(0, 2));
        if (twoDigit >= 10 && twoDigit <= 26) {
            char ch2 = 'a' + twoDigit - 1;
            printCodes(input.substr(2), output + ch2);
        }
    }
}

int main() {
    string input;
    cout << "Enter the numeric string: ";
    cin >> input;

    cout << "All possible codes:" << endl;
    printCodes(input, "");

    return 0;
}
