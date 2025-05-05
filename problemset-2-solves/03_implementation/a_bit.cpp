#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    int sum=0;
    while(t--)
    {
        string K;
        cin >> K; 
        if(K== "++X" || K== "X++")
        {
            sum = sum + 1;
        }
        else if(K== "--X" || K== "X--")
        {
            sum = sum - 1;
        }
    }
    cout << sum <<endl;

}