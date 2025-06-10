#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int A[1000];

    int minIndex = 0, maxIndex = 0;

    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
        if (A[i] < A[minIndex])
            minIndex = i;
        if (A[i] > A[maxIndex])
            maxIndex = i;
    }

    // Swap min and max values
    int temp = A[minIndex];
    A[minIndex] = A[maxIndex];
    A[maxIndex] = temp;

    for (int i = 0; i < N; ++i)
    {
        cout << A[i] << " ";
    }

    return 0;
}
