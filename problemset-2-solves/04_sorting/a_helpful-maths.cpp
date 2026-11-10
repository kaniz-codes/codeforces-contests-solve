// https://codeforces.com/problemset/problem/339/A

#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.length();

    for (int x = 0; x < n; x++) {
        for (int i = 0; i + 2 < n; i++) {
            if (s[i] != '+') {
                if (s[i] > s[i + 2]) {
                    swap(s[i], s[i + 2]);
                }
            }
        }
    }

    cout << s << endl;
    return 0;
}