#include <iostream>
using namespace std;

long long factorial(int n) 
{
    long long fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;
    return fact;
}
void solve(int n, int d) 
{
    long long fact = factorial(n);
    cout << "1";

    if ((fact * d) % 3 == 0) cout << " 3";
    if (d == 5) cout << " 5";
    if (fact % 7 == 0) cout << " 7";
    if (fact % 9 == 0) cout << " 9";

    cout << endl;
}

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, d;
        cin >> n >> d;
        solve(n, d);
    }
    return 0;
}
