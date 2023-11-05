#include <iostream>
#include <vector>

using namespace std;

inline int fibonacci(const int n, vector<int>& memo, bool use_memo = true) {
    if (n <= 1) {
        return n;
    }

    if (use_memo && memo[n] != -1) {
        return memo[n];
    }

    int result = fibonacci(n - 1, memo) + fibonacci(n - 2, memo);

    if (use_memo) {
        memo[n] = result;
    }

    return result;
}

int main() {
    const int n = 10;
    vector<int> memo(n + 1, -1);

    cout << "Fibonacci number at position " << n << " is: " << fibonacci(n, memo) << endl;

    cout << "Fibonacci number at position " << n << " without memoization: " << fibonacci(n, memo, false) << endl;

    return 0;
}
