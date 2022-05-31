#include<stdio.h>
int ispal(int n)
{
    int temp=n,d,rev=0;
    while(n)
    {
        d=n%10;
        rev=rev*10 +d;
        n=n/10;
    }
    return rev;
}
int main()
{
    int n,arr[100],i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        c=ispal(arr[i]);
        printf("%d ",c);
    }
}