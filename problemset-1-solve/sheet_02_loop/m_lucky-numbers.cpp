#include <iostream>
using namespace std;

int main() 
{
    int N1, N2;
    cin >> N1 >> N2;
    int luckyFound = 0;

    for (int i = N1; i <= N2; i++)
    {
        int temp = i;
        while (temp > 0 && (temp % 10 == 4 || temp % 10 == 7)) 
        {
            temp /= 10;
        }

        if (temp == 0) 
        {
            cout << i << " ";
            luckyFound = 1;
        }
    }
    if (!luckyFound)
    {
        cout << -1<< endl;
    }

    cout << endl;
    return 0;
}