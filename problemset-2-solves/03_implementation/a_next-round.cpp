#include <iostream>
using namespace std;

int main() 
{
    int K, F, count=0;
    cin >> K >> F;
    int a[50];
    for(int i=0; i<K; i++)
    {
        cin >>a[i];
    }
    int x = a[F-1];
    for(int i=0; i<K; i++)
    {
        if(a[i] >= x && a[i] > 0)
        {
            count++;
        }
    }
    cout << count <<endl;
    
}