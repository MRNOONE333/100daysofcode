#include <iostream>
using namespace std;

void incrementAddress(int** x) {
    (*x) += 1; // Increment the address stored in the pointer
}

int main() {
    int i = 10;
    int* p = &i;

    cout << "Address stored in p: " << p << endl;
    incrementAddress(&p); // Pass the address of the pointer to the function
    cout << "Address after increment: " << p << endl;
}

/*
In the function void incrementAddress(int** x), 
int** x receives the address of an int* (pointer to an integer). 
By dereferencing (*x), you access the value stored at the memory address pointed to by x, 
which happens to be an int*. Then, when you increment this value using (*x) += 1;, 
you're effectively incrementing the address stored in the pointer, not the content it points to.
*/