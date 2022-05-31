#include<stdio.h>
int fun(int n)
{
    int d,sum=0;
    while(n)
    {
        d=n%10;
        n=n/10;
        sum+=d;
    }
    return sum;
}
int main()
{
    int n,arr[100],i,c,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=fun(arr[i]);
        sum+=c;
    }
    printf("%d",sum);
}