// Using resursion in cpp-
// A child is running up a staircase with N steps, and can hop either 1 step, 2 steps or 3 steps at a time. Implement a method to count how many possible ways the child can run up to the stairs. You need to return number of possible ways W.
// Input format :
// Integer N

// Output Format :
// Integer W

// Constraints :
// 1 <= N <= 30

// Sample Input 1 :
// 4

// Sample Output 1 :
// 7

// Sample Input 2 :
// 5

// Sample Output 2 :
// 13

#include<iostream>
using namespace std;

int countWaysToClimbStairs(int n) {
    // Base cases
    if (n == 0 || n == 1) {
        return 1;
    } else if (n == 2) {
        return 2;
    } else {
        // Recursively calculate the number of ways for N-1, N-2, and N-3 steps
        return countWaysToClimbStairs(n - 1) + countWaysToClimbStairs(n - 2) + countWaysToClimbStairs(n - 3);
    }
}

int main() {
    int N;

    cout << "Enter the number of steps (1 <= N <= 30): ";
    cin >> N;

    if (N < 1 || N > 30) {
        cout << "Invalid input. Please enter a number between 1 and 30." << endl;
        return 1;
    }

    cout << "Number of ways to climb the stairs: " << countWaysToClimbStairs(N) << endl;

    return 0;
}
