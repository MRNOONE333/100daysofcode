#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str, int start, int end) {
    // Base case
    //If the string has been fully checked or has only one character left
    if (start >= end) {
        return true;
    }

    //Check if characters at start and end positions are equal
    if (str[start] != str[end]) {
        return false;
    }

    // Move to the next characters  
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    bool palindrome = isPalindrome(input, 0, input.length() - 1);

    if (palindrome) {
        cout << input << " is a palindrome." << endl;
    } else {
        cout << input << " is not a palindrome." << endl;
    }
    return 0;
}
