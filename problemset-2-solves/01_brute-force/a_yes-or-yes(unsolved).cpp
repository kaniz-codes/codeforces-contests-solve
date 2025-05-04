#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--)
    {
        string K;
        cin >> K;
        int i=0;
          if((K[i] == 'Y') || ((K[i] == 'y') && (K[i+1] == 'E')) || ((K[i+1] == 'e') && (K[i+2] == 'S')) || (K[i+2] == 's'))
          {
            cout << "YES" <<endl;
          }
          else
          {
            cout << "NO" <<endl;
          }

    }
    return 0;
}
    