#include<iostream>
using namespace std;

int main()
{
    
    int t;
    cin >> t;
    int count=0;
    while(t--)
    {
        string K;
        cin >> K;
        if(K[0]=='T')
        {
            count= count+4;
        }
        else if(K[0]=='C')
        {
            count= count+6;
        }
        else if(K[0]=='O')
        {
            count= count+8;
        }
        else if(K[0]=='D')
        {
            count= count+12;
        }
        else if(K[0]=='I')
        {
            count= count+20;
        }

    }
    cout<< count <<endl;
}