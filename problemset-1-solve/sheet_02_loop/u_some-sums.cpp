#include <iostream>
using namespace std;

int main() 
{
    int N, A, B;
    cin >> N >> A >> B;

    int totalSum = 0;
    for(int i = 1; i <= N; i++) 
    {   
        int num = i, sum = 0;
        while (num > 0) 
        {
            sum += num % 10;
            num /= 10;
        }

        if (sum >= A && sum <= B) 
        {
            totalSum += i;
        }
    }

    cout << totalSum << endl;
    return 0;
}
