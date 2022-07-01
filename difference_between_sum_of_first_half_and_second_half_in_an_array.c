#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,arr[100],i,s1=0,s2=0,m;
    scanf("%d",&n);
    m=n/2;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<m;i++)
    {
        s1+=arr[i];
    }
    for(i=m;i<n;i++)
    {
        s2+=arr[i];
    }
    printf("%d",abs(s1-s2));
}