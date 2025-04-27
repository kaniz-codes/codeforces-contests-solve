#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) 
    {
        string s;
        cin >> s;
        string K = "";
        for (int i = 0; i <9; i++) 
        {
            for (int j = i+1; j < 10; j++) 
            {
                if (s[i] > s[j]) 
                {
                    swap(s[i], s[j]);
                }
            }
        }

        for (int pos = 0; pos < 10; pos++) 
        {
            for (int i = 0; i < 10; i++) 
            {
                if (s[i] >= ('0' + (9 - pos))) 
                {
                    K += s[i]; 
                    for (int j = i; j < 9; j++) 
                    {
                        s[j] = s[j + 1];
                    }
                    s.resize(9); 
                    break; 
                }
            }
        }

        cout << K << endl; 
    }
    return 0;
}
