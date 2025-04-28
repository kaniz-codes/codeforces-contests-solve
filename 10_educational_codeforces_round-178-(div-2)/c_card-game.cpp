#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        string K;
        cin >> K;
        int count_a= 0, count_b= 0;
        if(n==2)
        {
            if(K[0]=='A')
            {
                cout<< "Alice"<<endl;
            }
            else
            {
                cout<< "Bob"<<endl;
            }
        }
        else if (n>2 && n%2==0)
        {
            cout<< "Bob"<<endl;
        }
       else
       {
            if(K[n-1]=='B')
            {
                cout<< "Bob"<<endl;
            }
            else
            {
                cout<< "Alice"<<endl;
            }

        }   
    }
    return 0;
}