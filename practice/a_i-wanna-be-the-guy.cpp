// https://codeforces.com/problemset/problem/469/A
#include <iostream>
using namespace std;

int main() 
{
    int n,p,q, count=0;
    cin >> n;
    
    // X[] er input
    cin >> p;
    int x[p];
    for (int i=0; i<p; i++)
    {
        cin >> x[i];
    }

    // Y[] er input
    cin >> q;
    int y[q];
    for (int i=0; i<q; i++)
    {
        cin >> y[i];
    }

    // Merge X and Y array
    int merged[p+q];
    for (int i=0; i<p; i++) 
    {
        merged[i] = x[i];
    }
    for (int i=0; i<q; i++) 
    {
        merged[p+i] = y[i];
    }

    // Level check korbe
    for (int level =1; level <=n; level++)
    {
        for (int i=0; i<p+q; i++)
        {
            if (merged[i] == level)
            {
                count++;
                break;
            }
        }
        
    }
    if (count==n)
    {
            cout << "I become the guy." << endl;
    }
    else
    {
         cout << "Oh, my keyboard!" << endl;
    }
    
    return 0;
}
