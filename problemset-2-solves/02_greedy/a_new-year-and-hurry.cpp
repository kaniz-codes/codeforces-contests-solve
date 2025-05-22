#include <iostream>
using namespace std;

int main() 
{
    int n, k;
    cin >> n >> k;

    int time_left = 240-k; 
    int total_time = 0;
    int count = 0;

    for (int i=1; i<=n; i++) 
    {
        total_time += 5*i;
        if (total_time>time_left)
         {
            break;
         }   
        count++;
    }

    cout << count << endl;
    return 0;
}
