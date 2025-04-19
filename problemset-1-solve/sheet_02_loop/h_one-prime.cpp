#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N; 

    if(N <= 1)
    {
            cout<< "NO" << endl;
    }
     
    bool Prime = true;
    for (int i = 2;i < N; i++) 
    {
        if (N % i == 0)
        {
            Prime = false;
            break; 
        }
    }
    if(Prime)
    {
            cout<< "YES" << endl;
    }
    else
    {
            cout<< "NO" << endl;
    }

    return 0;
}
