#include <iostream>
using namespace std;

int main() 
{
    int n, count=0;
    cin >> n;
    string  K;
    cin >> K;
    for(int i= 0; i <n; i++)
     {
        if(K[i]==K[i+1])
        {
            count++;
        }

     }   
    
    cout << count <<endl;
    
}