#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) 
        {
    cin >> a[i];
}

        sort(a.begin(), a.end());

        int min_val = a[0];
        int count = 0;
        for (int i = 0; i < n; ++i)
            if (a[i] == min_val) count++;

        cout << (n - count) << endl;
    }

    return 0;
}
