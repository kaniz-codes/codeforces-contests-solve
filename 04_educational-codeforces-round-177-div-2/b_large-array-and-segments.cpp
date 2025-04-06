//Not solved
#include <iostream>
using namespace std;
int main()
{
    long long n,k,x,t, b;
    cin >> t; 
    while(t--)
    {
        cin >> n >> k >> x ;
        int a[n], b[n*k];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        for(int i=0; i<k; i++) 
        {
            for(int j=0; j<n; j++) 
            {
                
                b[i*n+j] = a[j];
            }
        }

       /* for (int i = 0; i<n*k; i++) 
        {
            cout << b[i] << " ";
        }
       */
       long long count=0, sum=0, start=0;
       for (int l=0; l<n*k; l++) 
       {
        sum += b[l];
        if(sum>=x) 
        {
           count++
        }
    }

    cout << count <<endl;
    }   

    return 0;
}
