// K for Kaniz 😉
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
        for(int i = K.size()-1; i >= 0; i--)
        {
            cout << K[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
