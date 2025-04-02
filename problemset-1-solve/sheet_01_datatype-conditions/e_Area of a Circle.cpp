#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    float R, X = 0;
    cin >> R;
    X = 3.141592653 * R * R;
    cout << fixed << setprecision(9) << X << endl;
    return 0;
}
