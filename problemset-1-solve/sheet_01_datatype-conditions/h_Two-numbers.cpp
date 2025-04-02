#include <iostream>
using namespace std;

int main() 
{
    int A, B;
    cin >> A >> B;
    
    int floor_result = A / B;
    cout << "floor " << A << " / " << B << " = " << floor_result << endl;
    if (A % B == 0) {
        cout << "ceil " << A << " / " << B << " = " << floor_result << endl;
    } else {
        cout << "ceil " << A << " / " << B << " = " << (A / B) + 1 << endl;
    }
    if (A % B >= (B + 1) / 2) 
    {
        cout << "round " << A << " / " << B << " = " << floor_result + 1 << endl;
    } else {
        cout << "round " << A << " / " << B << " = " << floor_result << endl;
    }

    return 0;
}
