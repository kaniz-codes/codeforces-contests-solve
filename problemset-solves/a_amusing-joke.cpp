// https://codeforces.com/problemset/problem/141/A
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() 
{
    string A,B,C,S;
    cin>> A >> B >> C;
    S= A+B;

    //string sort korteche [AABBCD]
    sort(S.begin(), S.end());
    sort(C.begin(), C.end());

    if (S==C) 
    {
        cout<< "YES"<<endl; 
    } 
    else 
    {
        cout<< "NO"<<endl; 
    }
    return 0;
}
