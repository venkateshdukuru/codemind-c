#include<stdio.h>
int main()
{
    int n,a[100],i,sum=0,avg=0,x=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(avg<=a[i])
        {
            x++;
        }
    }
    printf("%d",x);
    
}