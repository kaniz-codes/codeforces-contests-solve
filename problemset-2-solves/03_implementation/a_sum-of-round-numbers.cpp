#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;

        int round_numbers[10];
        int count = 0;
        int place = 1;

        while (n > 0) 
        {
            int digit = n % 10;
            if (digit != 0) 
            {
              round_numbers[count] = digit * place;
              count++;
            }
            n /= 10;
            place *= 10;
        }

        cout << count << endl;
        for (int i = 0; i < count; i++) 
        {
            cout << round_numbers[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
