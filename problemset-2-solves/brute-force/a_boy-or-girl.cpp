#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string N;
    cin >> N;
    int len = N.size();
    for (int i=0; i<len; i++) 
    {
        if (N[i] >= 'A' && N[i] <= 'Z') 
        {
            N[i] = N[i]+32; 
        }
    }
    int j=0, count=0;
    char alp[27]="abcdefghijklmnopqrstuvwxyz";
    while(alp[j]!='\0')
    {
        int i=0;
        while(N[i]!='\0')
        {
            if(N[i]==alp[j])
            {
                count++;
                break;
            }
            i++;
        }
        j++;
    }

    if (count%2 == 0) 
    {
        cout << "CHAT WITH HER!" << endl;
    } 
    else 
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}