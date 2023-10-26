#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    // Declare second integer, double, and String variables.
    int _int ; 
    double _double  ; 
    string _string ;  
    
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back  and review the Tutorial closely.
    cin >> _int>> _double;
    cin.ignore();
    getline(cin, _string);
    int sum =  i + _int;
    double ssumd = d + _double;   
    string print_string=s+_string; 
    // Print the sum of both integer variables on a new line.
   
    cout<<(sum);
    // Print the sum of the double variables on a new line.
    cout<<endl <<  fixed << setprecision(1)  <<(ssumd);
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << endl <<(print_string);

    return 0;
}