#include<iostream>
using namespace std;

int main()
{
    
    int t;
    cin >> t;
    string F= "codeforces";
    while(t--)
    {
      string K;
      cin >> K;
      int count=0;
      for(int i=0; i< K.length(); i++)
      {
        if(K[i]!=F[i])
        {
            count++;
        }

      }
      cout<< count <<endl;

    }
    
}