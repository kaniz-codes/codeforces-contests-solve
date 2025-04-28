#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while(t--)
    {
        int A,B,C;
        cin >> A >> B >> C;

        if ((A + B + C)%3 != 0) 
        {
            cout << "NO" << endl;
        } 
        else 
        {
            int k;
            k = (A+B +C)/3;
            if (k >= B) 
            {
                cout << "YES"<< endl;
            } 
            else 
            {
                cout << "NO"<< endl;
            }
        }

    }
    return 0;
}