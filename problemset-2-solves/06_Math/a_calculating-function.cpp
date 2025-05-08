#include<iostream>
using namespace std;

int main() 
{
    long long K;
    cin >> K;

    if(K%2 == 0) 
    {
        cout << K/ 2 << endl;
    } else 
    {
        cout << -(K+ 1) / 2 << endl;
    }

    return 0;
}
