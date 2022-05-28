#include<stdio.h>
int main()
{
    int n,a[100],i,j,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        x=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                x++;
            }
        }
        if(x>(n/2))
        {
            printf("%d",a[i]);
            break;
        }
    }
}