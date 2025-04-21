#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        int j=i;
        while(j--)
        {
           cout << '*';
        }
        cout << endl;
    }
    
    return 0;
}