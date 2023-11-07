#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double geometricSum(int k) {
    // Base case
    if (k == 0) {
        return 1;
    }

    // Recursive case
    double smallOutput = geometricSum(k - 1);
    return smallOutput + 1 / pow(2, k);
}

int main() {
    int k;
    cout << "Enter the value of k: ";
    cin >> k;
    double sum = geometricSum(k);
    cout << fixed << setprecision(5);
    cout << "Sum of the geometric series: " << sum << endl;
    return 0;
}
