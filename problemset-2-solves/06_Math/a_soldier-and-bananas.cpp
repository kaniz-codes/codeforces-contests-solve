// https://codeforces.com/problemset/problem/546/A

#include <iostream>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;

    int x = 0, sum = 0;
    for (int i = 1; i < w + 1; i++) {
        x = k * i;
        sum = sum + x;
    }

    int y = sum-n;
    if (y >= 0)
        cout << y << endl;
    else
        cout << 0 << endl;

    return 0;
}