#include <iostream>
using namespace std;

int main() 
{
    int N;
    while (true) 
    {
        cin >> N;

        if (N == 1999) 
        {
            cout << "Correct" << endl;
            break;
        } else {
            cout << "Wrong" << endl;
        }
    }
    return 0;
}
