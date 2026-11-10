// https://codeforces.com/problemset/problem/1/A
#include <iostream>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;

    long long row, col;

    if (n % a == 0)
        row = n / a;
    else
        row = n / a + 1;

    if (m % a == 0)
        col = m / a;
    else
        col = m / a + 1;

    cout << row * col << endl;
    return 0;
}