#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    int lucky[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

    bool isAlmostLucky = false;
    for (int i = 0; i < sizeof(lucky)/sizeof(lucky[0]); i++) 
    {
        if (n % lucky[i] == 0) 
        {
            isAlmostLucky = true;
            break;
        }
    }

    if (isAlmostLucky) 
    {
       cout << "YES" << endl;
    } 
    else 
    {
      cout << "NO" << endl;
    }
    return 0;
}
