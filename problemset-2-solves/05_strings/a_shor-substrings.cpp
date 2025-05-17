#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        string K, a = "";
        cin >> K;

        for (int i=0; i<K.length(); i += 2) 
        {
            a += K[i];
        }
        a += K.back();

        cout << a << endl;
    }

    return 0;
}
