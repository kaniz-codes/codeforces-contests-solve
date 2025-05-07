#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string K, F;
        cin>> K >> F;
        cout<<F[0]<<K[1]<<K[2]<< " "<<K[0]<<F[1]<<F[2]<<endl;

    }
}