#include <iostream>
using namespace std;

int main() 
{
    double N;
    cin >> N;  
    int integer = N; 
    double decimal = N - integer; 
    
    if (decimal == 0) 
    {
        cout << "int " << integer << endl;
    } 
    else 
    {
        int decimal_int = decimal * 1000; 
        while (decimal_int % 10 == 0) 
        {
            decimal_int /= 10;
        }
        cout << "float " << integer << " " << decimal_int << endl;
    }

    return 0;
}
