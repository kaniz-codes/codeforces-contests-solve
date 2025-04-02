#include <iostream>
using namespace std;
int main()
{
    long long int X, Y, sum = 0, mul = 0, sub = 0;
    cin >> X >> Y;
    sum = X + Y;
    mul = X * Y;
    sub = X - Y;
    cout << X << " + " << Y << " = " << sum << endl;
    cout << X << " * " << Y << " = " << mul << endl;
    cout << X << " - " << Y << " = " << sub << endl;

    return 0;
}
