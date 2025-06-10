#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int left = 1, right = n;
        for (int i = 1; i <= n; ++i) {
            if (i % 2 == 1) {
                cout << left++ << " ";
            } else {
                cout << right-- << " ";
            }
        }
        cout << endl;
    }
    return 0;
}