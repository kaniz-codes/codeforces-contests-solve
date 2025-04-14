// https://codeforces.com/problemset/problem/1873/A
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--)
    {
    string A,B;
    cin>> A;
    //B er moddhe A rakhteche
    B= A;
    //string sort korteche [AABBCD]
    sort(A.begin(), A.end());

    if (B==A) 
    {
        cout<< "YES"<<endl; 
    } 
    else 
    {
        cout<< "NO"<<endl; 
    }
    }
    return 0;
}
