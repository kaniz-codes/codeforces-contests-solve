// https://codeforces.com/problemset/problem/141/A
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() 
{
    string A,result;
    cin>> A ;
    //sort korbe
    sort(A.begin(), A.end());
    // sorted string theke "+" bad dibe
    for (int i = 0; i < A.length(); i++) 
    {
        if (A[i] != '+') 
        {
            result += A[i];
        }
    }
    // "+" add korbe
    for (int i=0; i<result.length(); i++) 
    {
        cout << result[i];
        if (i != result.length() - 1) 
        {
            cout << "+";
        }
    }

    cout << endl;
    return 0;
}
