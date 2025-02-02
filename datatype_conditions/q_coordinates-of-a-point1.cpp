#include <iostream>
#include <cmath> 
using namespace std;

int main() 
{
    double X, Y;
    cin >> X >> Y;
    if (X == 0 && Y == 0)
        cout << "Origem\n";
    else if (Y == 0)
        cout << "Eixo X\n";
    else if (X == 0)
        cout << "Eixo Y\n";
    else if (X > 0 && Y > 0)
        cout << "Q1\n";
    else if (X < 0 && Y > 0)
        cout << "Q2\n";
    else if (X < 0 && Y < 0)
        cout << "Q3\n";
    else
        cout << "Q4\n";
    return 0;
}
