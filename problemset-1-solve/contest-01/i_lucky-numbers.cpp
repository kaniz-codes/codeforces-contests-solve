#include <iostream>
using namespace std;

int main() 
{
    int N;
    cin >> N;

    int M = N / 10;
    int X = N % 10; 

    if (X != 0 && M % X == 0 || M != 0 && X % M == 0)
    {
        cout << "YES" << endl;
    } else 
    {
        cout << "NO" << endl;
    }

    return 0;
}
