#include <iostream>
using namespace std;

int main() 
{
    string X;
    cin >> X;
    if (X[0] % 2 == 0)
        cout << "EVEN" << endl;
    else
        cout << "ODD" << endl;

    return 0;
}
