#include <iostream>
using namespace std;

int main() 
{
    int N,X;
    cin >> N;
    long long arr[100000];
    long long sum = 0;
    for(int i=0; i<N; i++)
    {
        cin >> arr[i];
    }
    cin >> X;
    for(int i=0; i<N; i++)
    {
        if(X==arr[i])
        {
          cout<< i <<endl;
          return 0;
        }
    }
    cout<< -1 <<endl;
    
}