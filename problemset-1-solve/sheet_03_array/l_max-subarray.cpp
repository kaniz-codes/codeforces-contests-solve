#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        int A[100];

        for (int i = 0; i < N; i++)
            cin >> A[i];

        for (int i = 0; i < N; i++)
        {
            int maxVal = A[i];
            for (int j = i; j < N; j++)
            {
                if (A[j] > maxVal)
                    maxVal = A[j];
                cout << maxVal << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
