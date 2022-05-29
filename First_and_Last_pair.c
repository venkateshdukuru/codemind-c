#include<stdio.h>
int main()
{
    int n,a[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n%2)
    {
        for(i=0;i<n/2;i++)
        {
            printf("%d %d ",a[i],a[n-i-1]);
        }
        printf("%d 0",a[n/2]);
    }
    else
    {
        for(i=0;i<n/2;i++)
        {
            printf("%d %d ",a[i],a[n-i-1]);
        }
    }
}