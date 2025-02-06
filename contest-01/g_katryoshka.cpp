#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    long long n, m, k;
    cin >> n >> m >> k;
    long long maxKatryoshkas = min(n / 2, min(m, k));
    cout << maxKatryoshkas << endl;

    return 0;
}
