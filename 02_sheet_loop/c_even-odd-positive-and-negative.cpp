#include <iostream>
using namespace std;

int main() 
{
    int n, num;
    int evenCount = 0, oddCount = 0, positiveCount = 0, negativeCount = 0;

    cin >> n;

    for (int i = 0; i < n; i++) 
    {
        cin >> num;
        
        if (num % 2 == 0) 
            evenCount++;
        else 
            oddCount++;

        if (num > 0) 
            positiveCount++;
        else if (num < 0) 
            negativeCount++;
    }

    cout << "Even: " << evenCount << endl;
    cout << "Odd: " << oddCount << endl;
    cout << "Positive: " << positiveCount << endl;
    cout << "Negative: " << negativeCount << endl;

    return 0;
}
