#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string p, q;
        cin >> p >> q;

        int i = 0, j = 0;

        while (i < p.size() && j < q.size())
        {
            if (p[i] != q[j])
                break;
            int countP = 0;
            while (i + countP < p.size() && p[i + countP] == p[i])
               {
                countP++;
               } 
            int countQ = 0;
            while (j + countQ < q.size() && q[j + countQ] == q[j])
             {
                countQ++;
             }  
            if (countQ < countP || countQ > countP * 2)
             {
                break;
             }  

            i += countP;
            j += countQ;
        }
        if (i == p.size() && j == q.size())
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
