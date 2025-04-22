#include <iostream>
using namespace std;

int main() 
{
    int space, N;
    cin >> N;
    for(int i = 1; i <= N; i++) 
    {
        for(space = 1; space <= N - i; space++) 
        {
            cout << " ";
        }
        for(int k = 1; k <= 2 * i - 1; k++) 
        {
            cout << "*";
        }
        cout << endl;
    } 
    for(int i=N; i>=0; i--)
    {
        for(space = 1; space <= N - i; space++) 
        {
            cout << " ";
        }
        for(int k = 1; k <= 2 * i - 1; k++) 
        {
            cout << "*";
        }
        cout << endl;
    }
       
    return 0;
}
