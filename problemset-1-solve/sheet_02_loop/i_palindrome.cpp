#include <iostream>
using namespace std;
int main()
{
    int N, rev=0 , temp, rem;
    cin >> N;

    temp = N;
    while(temp !=0 )
    {
        rem = temp%10;
        rev = rev*10 +rem;
        temp /=10;
    }
    cout << rev << endl;
    if(N == rev)
    {
        cout << "YES" <<endl;
    }
    else
    {
        cout << "NO" <<endl;
    }
     
}