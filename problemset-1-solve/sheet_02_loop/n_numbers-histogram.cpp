#include <iostream>
using namespace std;

int main() 
{
    char x;
    int t;
    cin >> x;
    cin >> t;
    int arr[70];
    for(int i=0; i<t; i++)
    {
        
        cin >> arr[i];
    }
    for(int i=0; i<t; i++)
    {
        int num = arr [i];
        while(num--)
         {
            cout << x;
         }
         cout << endl;
    }
    
    return 0;
}