#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N; 

    // First check if N is divisible by 4 or 7
    if (N % 4 == 0 || N % 7 == 0)
    {
        cout << "YES" << endl;
        return 0;
    }

    // Now check if all digits are 4 or 7
    int temp = N;
    bool isLucky = true;
    while (temp > 0)
    {
        int digit = temp % 10;
        if (digit != 4 && digit != 7)
        {
            isLucky = false;
            break;
        }
        temp = temp / 10;
    }

    if (isLucky)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
