#include <iostream>

using namespace std;

int main() 
{
    int N;
    cin >> N;
    long long arr[1000];
    for(int i=0; i<N; i++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<N; i++)
    {
        if(arr[i]>0)
        {
            cout << "1 ";
        }
        else if(arr[i]<0)
        {
            cout << "2 ";
        }
        else
        {
            cout << "0 ";
        }
    }
    
    return 0;
}