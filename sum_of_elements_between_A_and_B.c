#include<stdio.h>
int main()
{
    int n,arr[100],a,b,sum=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]>=a && arr[i]<=b)
        {
            sum+=arr[i];
        }
    }
    printf("%d",sum);
}