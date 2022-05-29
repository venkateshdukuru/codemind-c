#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[100],i,sum=0,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    x=n;
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            sum=sum+pow(2,x-1);
        }
        x--;
    }
    printf("%d",sum);
}