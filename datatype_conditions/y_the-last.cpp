#include <iostream>
using namespace std;

int main() 
{
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    long long result = 1;
    result = (result * A) % 100;
    result = (result * B) % 100;
    result = (result * C) % 100;
    result = (result * D) % 100;

    if (result < 10)
        cout << "0" << result << endl;
    else
        cout << result << endl;

    return 0;
}
