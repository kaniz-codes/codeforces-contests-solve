#include <iostream>
using namespace std;

int main() 
{
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    if (r1 < l2 || r2 < l1) 
    {
        cout << -1 << endl;
    } else 
    {
        int left, right;
        
        if (l1 > l2)
            left = l1;
        else
            left = l2;
        
        if (r1 < r2)
            right = r1;
        else
            right = r2;

        cout << left << " " << right << endl;
    }

    return 0;
}
