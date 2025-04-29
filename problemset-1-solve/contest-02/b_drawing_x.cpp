#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int mid = N/2;

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(i == mid && j == mid) 
            {
                cout << 'X';
            }
            else if(i == j) 
            {
                cout << '\\';
            }
            else if(i+j == N-1) 
            {
                cout << '/';
            }
            else 
            {
                cout << '*';
            }
        }
        cout << endl;
    }

    return 0;
}
