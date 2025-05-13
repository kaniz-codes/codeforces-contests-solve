#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int N;
    cin >> N;
    long long arr[100000];
    long long sum = 0;
    for(int i=0; i<N; i++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<N; i++)
    {
        sum += arr[i];
    }
    cout<< abs(sum)<<endl;
    return 0;
}