#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    for(int i=t; i>=0; i--)
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