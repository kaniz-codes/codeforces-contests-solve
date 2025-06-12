#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    if (N == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    if (N == 2)
    {
        cout << 1 << endl;
        return 0;
    }

    int a = 0, b = 1, c;
    for (int i = 3; i <= N; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    cout << b << endl;
    return 0;
}
