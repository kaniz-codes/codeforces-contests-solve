#include <iostream>
using namespace std;

int main() 
{
    int K, F, count=0;
    cin >> K >> F;
    while(K <= F)
    {
        K = K*3;
        F= F*2;
        count++;

    }
    
    cout << count <<endl;
    
}