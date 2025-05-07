#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string K;
        cin >> K;
        int n = K.length();
        if(n>10)
        {
            cout<<K[0]<<K.length()-2<<K[n-1]<<endl;
        }
        else
          cout<< K<<endl;
        
    }
    
}