#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        long long a, b;
        cin >> a >> b;
        long long moves;
        if (a % b == 0) 
        {
            moves = 0;
        } 
        else 
        {
            moves = b - (a % b);
        }
        cout << moves << endl;
    }
    return 0;
}
