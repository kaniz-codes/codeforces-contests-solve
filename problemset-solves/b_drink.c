//https://codeforces.com/problemset/problem/200/B 

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int i=0,p=0;
    double sum=0;

    while(i<n)
    {
        scanf("%d",&p);
        sum=sum+p;
        i++;
    }

    double ans=sum/n;
    printf("%.12lf\n",ans);

    return 0;
}