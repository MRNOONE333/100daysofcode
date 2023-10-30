#include <iostream>
using namespace std;

void increment(int& x) {   // if we remove & from here it will print 10,10
    x += 1; // Increment the referenced value
}

int main() {
    int i = 10;

    cout << "Original value of i: " << i << endl;

    increment(i); // Pass i by reference

    cout << "Value of i after increment: " << i << endl;

}
