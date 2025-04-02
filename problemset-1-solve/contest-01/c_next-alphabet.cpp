#include <iostream>
using namespace std;

int main() 
{
    char C;
    cin >> C;
    if (C == 'z') 
    {
        C = 'a';
    } 
    else 
    {
        C = C + 1;
    }
    cout << C << endl;

    return 0;
}
