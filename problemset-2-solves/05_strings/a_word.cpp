#include<iostream>
using namespace std;

int main()
{
    string K;
    cin >> K;
    int upper = 0, lower = 0;
    for (int i = 0; i < K.length(); i++) 
    {
        if (K[i] >= 'A' && K[i] <= 'Z')
            upper++;
        else
            lower++;
    }
    if( upper > lower )
    {
       for (int i = 0; i < K.length(); i++) 
       {
         K[i] = toupper(K[i]);
       }
    }
    else
    {
        for (int i = 0; i < K.length(); i++) 
       {
         K[i] = tolower(K[i]);
       }

    }
    cout << K <<endl;
  
return 0;
    
}