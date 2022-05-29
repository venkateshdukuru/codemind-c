#include<stdio.h>
int main()
{
    int n,a[100],i,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0 || a[i]==1)
        {
            x++;
        }
    }
    if(x==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}