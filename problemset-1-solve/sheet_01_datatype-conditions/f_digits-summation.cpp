#include <iostream>
using namespace std;
int main()
{
    long long int N,M, X= 0,Y= 0;
    cin >> N>>M;
    X=N%10;
    Y=M%10;
    cout << X+Y << endl;
    return 0;
}
