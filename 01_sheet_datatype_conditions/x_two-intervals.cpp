#include <iostream>
using namespace std;

int main() {
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    int left = max(l1, l2);  
    int right = min(r1, r2);

    if (left <= right) {
        cout << left << " " << right << endl;
    } else {
        cout << -1 << endl; 
    }

    return 0;
}
