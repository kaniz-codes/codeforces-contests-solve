#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double N;
    cin >> N;

    int integerPart = static_cast<int>(N);
    double decimalPart = N - integerPart;

    if (decimalPart == 0) 
    {
        cout << "int " << integerPart << endl;
    } else
    {
       
        int decimalAsInt = round((decimalPart * 1000)); 

        cout << "float " << integerPart << "." << decimalAsInt << endl;
    }

    return 0;
}
