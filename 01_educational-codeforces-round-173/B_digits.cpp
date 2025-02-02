#include <iostream>
#include <vector>
using namespace std;

// Function to compute factorial of n
long long factorial(int n) {
    long long fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;
    return fact;
}

// Function to check divisibility and print results
void solve(int n, int d) {
    long long fact = factorial(n);
    vector<int> divisors = {1};  // 1 is always a divisor

    if ((fact * d) % 3 == 0) divisors.push_back(3);
    if (d == 5) divisors.push_back(5);
    if (fact % 7 == 0) divisors.push_back(7);
    if (fact % 9 == 0) divisors.push_back(9);

    // Print divisors
    for (int num : divisors)
        cout << num << " ";
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        solve(n, d);
    }
    return 0;
}
