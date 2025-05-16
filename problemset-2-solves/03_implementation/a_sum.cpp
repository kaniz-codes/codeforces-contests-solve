#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        if(X+Y == Z)
        {
            cout << "YES" <<endl;
        }
        else if(Y+Z == X)
        {
            cout << "YES" <<endl;
        }
        else if(X+Z == Y)
        {
            cout << "YES" <<endl;
        }
        else
        {
            cout << "NO" <<endl;
        }
    }
    return 0;
}