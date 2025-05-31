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
        if(arr[i]<11)
        {
            cout << "A[" << i << "] = " << arr[i] << endl;
        }
    }
    
    return 0;
}