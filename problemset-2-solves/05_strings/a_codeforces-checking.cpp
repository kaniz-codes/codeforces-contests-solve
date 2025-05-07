#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string S="codeforces";
    while(t--)
    {
        char K;
        cin >> K;
        int flag=0;
        for(int i=0; i<S.length(); i++)
        {
            if( S[i]== K)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout<< "YES" <<endl;
        }
        else
        {
            cout<< "NO" <<endl;
        }
         
    }
}