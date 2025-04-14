#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--)
    {
        string K;
        cin >> K;
        for (int i = 0; i < K.length(); i++) 
        {
            K[i] = tolower(K[i]);
        }
        if (K == "yes") 
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}
