#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int N, M;
        cin >> N>> M;
        string K;
        int i;
        for (int i = 0; i < N; i++) 
        {
            
            K[i]= i;
        }
        reverse(K.begin(), K.end());
        for (int i= 0; i < N-1; i++) 
        {
            if(K[i] < M)
            {
               cout<< K[i]<<" ";
            }
            
        }
        cout<< M << endl;
    }
}