#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ones = 0, twos = 0, x;
        for (int i=0; i<n; i++)
        {
            cin >> x;
            if (x == 1) 
               ones++;
            else 
               twos++;
        }

        int total = ones+2 * twos;

        if (total%2!= 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            int half = total / 2;
            if (half%2 != 0 && ones==0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}
