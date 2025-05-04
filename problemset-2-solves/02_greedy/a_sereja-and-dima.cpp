#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int a[1000];

    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    int sereja = 0, dima = 0;
    int l = 0, r = n - 1;
    int turn = 0; // 0 for Sereja, 1 for Dima

    while (l <= r) 
    {
        int pick;
        if (a[l] > a[r]) 
        {
            pick = a[l++];
        } else {
            pick = a[r--];
        }

        if (turn % 2 == 0) 
        {
            sereja += pick;
        } else 
        {
            dima += pick;
        }

        turn++;
    }

    cout << sereja << " " << dima << endl;
    return 0;
}
