#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int t, n;
    cin >> t;

    while(t--) 
    {
        cin >> n;
        string a, b;
        cin >> a >> b;

        // shob gula 0 ache kina
        int flag = 1; 
        for(int i = 0; i < n; i++)
        {
            if(a[i] != '0')
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        {
            cout << "YES" << endl;
           
        }
        else
        {
            continue;
        }
// -----------------------------------------
        // jodi 0 na hoy
        for(int i=0; i < n; i++)
        {
            if ((a[i] =='1' && b[i - 1] == '0') || (b[i] == '0' && a[i - 1] == '1'))
            {
                swap(a[i], b[i - 1]);
               // cout<<"for if"<< i <<"A "<< a<< "  B "<<b <<endl;
            }
            else if ((a[i] == '1' && b[i-1] == '1') || (b[i] == '1' && a[i - 1] == '1'))
            {
                swap(b[i], a[i - 1]);
                //cout<<"for elseif"<< i <<"A "<< a<< "  B "<<b <<endl;
            }
        }
        
        flag = 1;
        for(int i= 0; i < n; i++)
        {
            if(a[i] != '0')
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}
