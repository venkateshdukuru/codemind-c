#include<stdio.h>
int main()
{
    int n,a[100],i,sum1=0,sum2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++)
    {
        sum1+=a[i];
    }
    for(i=n/2;i<n;i++)
    {
        sum2+=a[i];
    }
    if(sum1>sum2)
    {
        printf("%d",sum1-sum2);
    }
    else
    {
        printf("%d",sum2-sum1);
    }
}