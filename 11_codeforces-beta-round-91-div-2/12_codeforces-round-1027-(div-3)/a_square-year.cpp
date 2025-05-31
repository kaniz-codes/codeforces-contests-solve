#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int val = stoi(s); 
        bool found = false;
        for (int i=0; i*i<= val; i++)
        {
            if (i*i == val)
            {
                cout << 0 << " " << i << endl;
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
