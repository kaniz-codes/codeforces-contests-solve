#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, k;
        cin >> x >> k; // x=12, k= 3

        long long y = 0;
        int digits = 0;
        int temp = x;

        while (temp > 0)
        {
            digits++;    // digit= 2
            temp /= 10;
        }
       
        for (int i=0; i<k; i++) 
        {
            y = y*pow(10, digits)+x;  // y= 12, y= 12*100= 1200+12= 1212

        if (y <= 1)
        {
            cout << "NO" << endl;
            continue;
        }
        bool isPrime = true;
        for (int a=2; a*a<=y; a++)
        {
            if (y%a == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
