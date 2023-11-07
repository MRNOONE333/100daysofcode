#include <iostream>
using namespace std;

int countZeros(int n) {
    // Base case
    if (n == 0) {
        return 0;
    }

    // Recursive case
    int lastDigit = n % 10;
    int smallOutput = countZeros(n / 10);

    // Increment count if the last digit is zero
    if (lastDigit == 0) {
        return smallOutput + 1;
    }

    return smallOutput;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int zeros = countZeros(number);
    cout << "Number of zeros in the given number: " << zeros << endl;
    return 0;
}
