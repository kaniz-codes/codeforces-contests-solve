#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while(t--)
    {
        long long L, R;
        cin >> L >> R;
        long long sum = (R-L+1)*(L+R)/2;
        cout << sum << endl;
    }

    return 0;
}
