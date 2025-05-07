#include <bits/stdc++.h>
using namespace std;

int main()
{
    string K, F;
    cin >> K >> F;
    reverse(K.begin(), K.end());

    if (F == K)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
