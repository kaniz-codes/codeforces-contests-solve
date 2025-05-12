#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, arr[100], K=0;
        cin >> N;

        for(int i=0; i<N; i++)
        {
            cin >> arr[i];
        }
        if (arr[0] != arr[1]) 
        {
            if (arr[0] == arr[2]) 
            {
                K = 2; 
            } 
            else
            {
                K = 1;
            }
        } 
        else 
        {
            for (int i=2; i<N; i++) 
            {
                if (arr[i] != arr[0]) 
                {
                    K = i + 1;
                    break;
                }
            }
        }
        cout << K << endl;
    }
}
