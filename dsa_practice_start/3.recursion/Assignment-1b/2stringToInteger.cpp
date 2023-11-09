// Problem Description:
// Write a recursive function to convert a given string into the number it represents. That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.
// Input format :
// Numeric string S (string, Eg. "1234")

// Output format :
// Corresponding integer N (int, Eg. 1234)

// Constraints :
// 0 <= |S| <= 9
// where |S| represents length of string S.

// Sample Input 1 :
// 1231

// Sample Output 1 :
// 1231

// Sample Input 2 :
// 12567

// Sample Output 2 :
// 12567

#include <iostream>

using namespace std;

int convert_string_to_integer(string s) {
  if (s.length() == 0) {
    return 0;
  }

  return (s[0] - '0') + 10 * convert_string_to_integer(s.substr(1));
}

int main() {
  string s = "1231";
  int n = convert_string_to_integer(s);

  cout << n << endl;

  return 0;
}
