// https://codeforces.com/problemset/problem/520/A
#include <iostream>
using namespace std;
int main() 
{
    int n, Count = 0;
    cin >> n;
    string x;
    cin >> x;
    char alp[27]="abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < n; i++) 
    {
        if (x[i] >= 'A' && x[i] <= 'Z') 
        {
            x[i] = x[i]+32; 
        }
    }
    int j=0;
    while(alp[j]!='\0')
    {
        int k=0;
        while(x[k]!='\0')
        {
            if(x[k]==alp[j])
            {
                Count++;
                break;
            }
            k++;
        }
        j++;
    }

    if (Count == 26) 
    {
        cout << "YES" << endl;
    } 
    else 
    {
        cout << "NO" << endl;
    }

    return 0;
}
