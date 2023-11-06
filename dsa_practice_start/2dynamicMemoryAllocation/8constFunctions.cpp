#include <iostream>
using namespace std;

int main() {
    const int constantVariable = 5; // Declaring a constant variable

    int i = 10;
    int j = 21;

    const int *p = &i; // Pointer to a constant integer
    // *p = 15; // Error: Attempting to modify a constant object

    int *p2 = &i;
    (*p2)++; // Increment the value pointed to by p2 (i) by 1

    const int *const p3 = &i; // Constant pointer to a constant integer
    // *p3 = 8; // Error: Attempting to modify a constant object
    // (*p3)++; // Error: Attempting to modify a constant object

    cout << "i after incrementing through p2: " << i << endl;
    cout << "constantVariable: " << constantVariable << endl;

    return 0;
}
