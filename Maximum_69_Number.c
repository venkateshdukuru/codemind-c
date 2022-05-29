#include<stdio.h>
int main()
{
    int i=0,n,j,a[100],d;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        n=n/10;
        a[i]=d;
        i++;
        
    }
    for(j=i;j>=0;j--)
    {
        if(a[j]==6)
            {
                a[j]=9;
                break;
            }
        }
        for(j=i-1;j>=0;j--)
        {
            printf("%d",a[j]);
        }
    }