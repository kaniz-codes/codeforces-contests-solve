#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string K;
    cin >> K;

    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += K[i] - '0';
    }
    cout << sum << endl;
    return 0;
}
