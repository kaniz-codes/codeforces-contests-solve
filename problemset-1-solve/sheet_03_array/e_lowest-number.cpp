#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    long long arr[1000];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    long long min_val = arr[0];
    int min_index = 0;

    for (int i = 1; i < N; i++)
    {
        if (arr[i] < min_val)
        {
            min_val = arr[i];
            min_index = i;
        }
    }

    cout << min_val << " " << min_index +1 << endl;

    return 0;
}
