#include <iostream>
using namespace std;
int main() {
    int A, B, C,minVal,maxVal;
    cin >> A >> B >> C;
    minVal = min(A, min(B, C));
    maxVal = max(A, max(B, C));
    cout << minVal << " " << maxVal << endl;
    return 0;
}
