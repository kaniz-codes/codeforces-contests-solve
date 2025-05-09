#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int L, R,sum=0;
        cin >> L >> R;
        for(int i=L; i<= R; i++)
        {
           sum= i+sum;
        }
        cout << sum << endl;
    }
    
    return 0;
}
