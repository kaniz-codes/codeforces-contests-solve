//https://codeforces.com/problemset/problem/1352/A
#include<stdio.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int len = s.size();

        int count = 0;
        for (int i = 0; i < len; i++) {
            if (s[i] != '0') {
                count++;
            }
        }
        cout << count << "\n";

        for (int i = 0; i < len; i++) {
            if (s[i] != '0') {
                cout << s[i];
                for (int j = 0; j < len - i - 1; j++) {
                    cout << '0';
                }
                cout << " ";
            }
        }
        cout << "\n";
    }
}