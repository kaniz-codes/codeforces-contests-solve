// https://codeforces.com/problemset/problem/1335/A?locale=en
#include <iostream>
using namespace std;
int main() 
{
    int t, n, a, b, x, Count;
    cin >> t; 

    while (t--) 
    {
        cin >> n;
        if(n%2 !=0)
        {
        x = (n/2);
        Count=0; 
        for (int i=1; i<=x; i++) 
        {
            b =n/i;
            a =n-b;
            if(a+b == n) 
            { 
                Count++;
            }
        }
        cout << Count << endl;
        }

        else
        {
            x = (n/2)-1;
        Count=0; 
        for (int i=1; i<= x; i++) 
        {
            b =n/i;
            a =n-b;
            if(a + b == n) 
            { 
                Count++;
            }
        }
        cout << Count << endl;

        }
        
    }

    return 0;
}
