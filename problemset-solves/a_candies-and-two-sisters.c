#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);

        int m,a,b,count=0;
        m=(n/2)+1;

        for(int i=1;i<=m;i++)   
        {
            b=n/i;
            a=n-b;

            if(a>b && a+b==n)
            {
                count++;
            }
        }

        printf("%d",count);
    }
}