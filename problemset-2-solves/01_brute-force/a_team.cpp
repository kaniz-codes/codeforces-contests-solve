#include <iostream>
using namespace std;

int main() 
{
    int t, count = 0;
    cin >> t;

    for (int i=0; i<t; i++) 
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a+b+c >= 2)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
