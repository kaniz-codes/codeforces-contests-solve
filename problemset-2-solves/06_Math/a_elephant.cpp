#include<iostream>
using namespace std;

int main()
{
    int N, count = 0;
    cin >> N;

    for(int i=5; i>= 1; i--)
    {
        count += N / i;
        N %= i;
    }

    cout << count << endl;
    return 0;
}
