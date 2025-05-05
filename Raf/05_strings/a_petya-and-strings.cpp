#include<iostream>
#include <cctype>
using namespace std;

int main()
{
        string K, F;
        cin >> K >> F;
        for (int i = 0; i < K.length(); i++) 
        {
            K[i] = tolower(K[i]);
        }
        for (int i = 0; i < F.length(); i++) 
        {
            F[i] = tolower(F[i]);
        }

        if(K==F)
        {
            cout<< 0<<endl;
        }
        else if(K<F)
        {
            cout<< -1 <<endl;
        }
        else
        {
            cout<< 1 <<endl;
        }
        
   
    
}