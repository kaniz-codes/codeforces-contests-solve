//https://codeforces.com/problemset/problem/977/B
#include<stdio.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int best = 0;
    int pos = 0;

    for (int i = 0; i < n - 1; i++) {
        int count = 1;
        for (int j = i + 1; j < n - 1; j++) {
            if (s[j] == s[i] && s[j + 1] == s[i + 1]) {
                count++;
            }
        }
        if (count > best) {
            best = count;
            pos = i;
        }
    }

    cout << s[pos] << s[pos + 1] << "\n";
}