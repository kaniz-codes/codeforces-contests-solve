#include <iostream>
using namespace std;

int main() 
{
    int N, M;
    while (true) 
    {
        cin >> N >> M;
        if (N <= 0 || M <= 0) 
        {
            break; 
        }
        if (N > M) 
        {
            swap(N, M);
        }
        for (int i=N; i <= M; i++) 
        {
            cout << i << " ";
        }
        int sum = 0;
        for (int i = N; i <= M; ++i) 
        {
            sum += i;
        }
        
        // Print the sum
        cout << "sum =" << sum << endl;
    }
    
    return 0;
}
