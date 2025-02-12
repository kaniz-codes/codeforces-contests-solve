#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N; 

    int max = 0;
    for (int i = 0; i < N; i++) 
    {
        int num;
        cin >> num; 
        
        if (i == 0 || num > max) 
        {
            max = num;
        }
    }

    cout << max_number << endl;
    return 0;
}
