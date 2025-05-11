#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t; 
    while(t--)
    {
        string K;
        cin >> K;

        if(K == "abc") 
        {
            cout << "YES" << endl;
        }
        else 
        {
            string temp = K;

            swap(temp[0], temp[1]);
            if(temp == "abc") 
            {
                cout << "YES" << endl;
                continue;
            }

            temp = K; // reset
            swap(temp[1], temp[2]);
            if(temp == "abc") 
            {
                cout << "YES" << endl;
                continue;
            }

            temp = K; // reset
            swap(temp[0], temp[2]);
            if(temp == "abc") 
            {
                cout << "YES" << endl;
                continue;
            }
            cout << "NO" << endl;
        }
    }
}
