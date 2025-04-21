#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int N;
        string K;
        cin >> N;
        cin >> K;
        
        reverse(K.begin(), K.end());
        
        int count = 0;
        int i = 0;

        while (i < N) 
        {
            if (K[i] == '0') 
            {
                int count_zeros = 0;
                while (i < N && K[i] == '0') 
                {
                    count_zeros++;
                    i++;
                }
                count += count_zeros;
            } 
            else 
            {
                int count_ones = 0;
                while (i < N && K[i] == '1') 
                {
                    count_ones++;
                    i++;
                }
                count += count_ones + 1; 
            }
        }

        cout << count << endl;
    }

    return 0;
}
