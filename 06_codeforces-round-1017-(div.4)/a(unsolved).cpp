#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--)
    {
        string K,F = "";
        cin >> K;
        F[0]=K[0];
        for(int i=0; i<K.length(); i++)
        {
            if(K[i]=='\0')
            {
               int j=1;
               F[j]= K[i+1];
               j++;
            }
        }
        cout << F <<endl;
    }
    return 0;
}