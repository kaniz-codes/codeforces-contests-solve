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
        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }

        int result = 1000000000; 
        int minA = A[0] - 0;

        for (int j = 1; j < N; ++j)
        {
            int current = minA + A[j] + j;
            if (current < result)
                result = current;

            int aMin = A[j] - j;
            if (aMin < minA)
                minA = aMin;
        }

        cout << result << endl;
    }
    return 0;
}
