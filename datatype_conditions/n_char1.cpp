#include <iostream>
using namespace std;

int main() 
{
    char X;
    cin >> X;

    // Toggle case using XOR
    cout << (char)(X ^ 32) << endl;

    return 0;
}
