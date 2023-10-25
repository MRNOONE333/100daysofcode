/*
Arithmetic Operators
Relational Operators
Assignment Operators 
*/

/*
&& 	Logical and	Returns true if both statements are true	
|| 	Logical or	Returns true if one of the statements is true	
!	Logical not	Reverse the result, returns false if the result is true	
*/

// logical operators.
// &&


// --------------------------------------------------code-1
// #include <iostream>
// using namespace std;
// int main(){
//     int x = 3;
//     cout << ((x > 2) && (x < 10)) << endl; // output - 1
//     cout << ((x < 1) || (x > 2)) << endl; // output - 1 //bcz1 is true.
//     cout << (x!=5);

// }


// -------------------------------------------------- code-2

#include <iostream>
using namespace std;

int main(){
    int a=5 ,  b =7 ;
    // a = 5(00000101), b = 9(00001001)
    cout<< (a &b )<< endl;
    cout<< (a | b )<< endl;
    cout<< (a ^ b )<< endl;
    cout<< (a <<1 )<< endl;
    cout<< (a >>1 )<< endl;
}




// -------------------------------------------------- code- 3
// #include <stdio.h>

// int main() {
//     int num = 1;
    
//     // Undefined behavior for left-shifting a negative number
//     int leftShiftNegative = -3 << 1;
    
//     // Undefined behavior for right-shifting a negative number
//     int rightShiftNegative = -2 >> 1;

//     // Undefined behavior for left-shifting beyond integer size
//     int leftShiftOverflow = 1 << 333; // Assumes 32-bit integer

//     // No shift operation is performed when the shift amount is 0
//     int noShift = 1 << 0;

//     printf("Left-shift of -1: %d\n", leftShiftNegative);
//     printf("Right-shift of -1: %d\n", rightShiftNegative);
//     printf("Left-shift overflow: %d\n", leftShiftOverflow);
//     printf("No shift: %d\n", noShift);

//     return 0;
// }

