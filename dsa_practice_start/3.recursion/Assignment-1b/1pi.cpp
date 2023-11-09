// Problem Statement: Replace pi (recursive)
// Problem Level: MEDIUM
// Problem Description:
// Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".

// Sample Input 1 :
// xpix

// Sample Output :
// x3.14x

// Sample Input 2 :
// pipi

// Sample Output :
// 3.143.14

// Sample Input 3 :
// pip

// Sample Output :
// 3.14p


#include <iostream>

using namespace std;

string replace_pi(string s) {
  if (s.length() < 2) {
    return s;
  } else if (s.substr(0, 2) == "pi") {
    return "3.14" + replace_pi(s.substr(2));
  } else {
    return s[0] + replace_pi(s.substr(1));
  }
}

int main() {
  string input = "xpix";
  string output = replace_pi(input);
  cout << output << endl;

  input = "pipi";
  output = replace_pi(input);
  cout << output << endl;

  input = "pip";
  output = replace_pi(input);
  cout << output << endl;

  return 0;
}