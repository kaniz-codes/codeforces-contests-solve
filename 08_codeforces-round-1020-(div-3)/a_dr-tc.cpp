#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int N;
        cin >> N;
        string K;
        cin>> K;

        int count=0;

        for(int i=0; i< N; i++)
        {
            string temp = K;

            if (temp[i] == '0') 
            {
               temp[i] = '1';
            } 
            else 
             {
                temp[i] = '0';
             }
            for(int j=0; j<N; j++)
            {
                if(temp[j]=='1')
                {
                    count++;
                }
            }
        }
        cout<< count <<endl;

    }
    return 0;
}