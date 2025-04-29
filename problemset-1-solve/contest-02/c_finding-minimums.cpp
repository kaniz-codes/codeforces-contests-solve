#include <iostream>
using namespace std;

int main() 
{
    int N, K;
    cin >> N >> K;
    int arr[100000];
    for (int i = 0; i < N; ++i) 
    {
        cin >> arr[i];
    }

    for (int i = 0; i < N; i += K) 
    {
        int minVal = arr[i];
        for (int j = i+1; j < i+K && j<N; j++) 
        {
            if (arr[j] < minVal) 
            {
                minVal = arr[j];
            }
        }
        cout << minVal << " ";
    }

    cout << endl;
    return 0;
}
