#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) 
    {
        int N, M;
        cin >> N >> M;
        for (int i = N-1; i >= 0; i--) 
        {
            if (i == M)
                break;
            else
                cout << i << " ";
        }
        cout << M << endl;
    }

    return 0;
}
