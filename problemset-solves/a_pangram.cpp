#include <iostream>
using namespace std;

int main() 
{
    int n, Count = 0;
    cin >> n;
    string x;
    cin >> x;

    int letters[26] = {0};  

    for (int i = 0; i < n; i++) 
    {
        if (x[i] >= 'A' && x[i] <= 'Z') 
        {
            x[i] = x[i]+32; 
        }
        int index = x[i]-'a';
    
        if (letters[index] == 0) 
        {
            letters[index] = 1; 
            Count++; 
        }
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
