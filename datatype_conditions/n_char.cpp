#include <iostream>
using namespace std;

int main() 
{
    char X;
    cin >> X;
 
    if (X >= 'a' && X <= 'z') 
    {
        cout << char(X - 32) << endl;
    }
    else if (X >= 'A' && X <= 'Z') 
    {
        cout << char(X + 32) << endl;  
    }

    return 0;
}
