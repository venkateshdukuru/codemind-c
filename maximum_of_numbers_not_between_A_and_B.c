#include<stdio.h>
int main()
{
    int n,a[100],i,k=0,b[100],x,y,c=0,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&x,&y);
    for(i=0;i<n;i++)
    {
        if(a[i]>=x && a[i]<=y)
        {
            continue;
        }
        else
        {
        b[k]=a[i];
        k++;
        }
        
    }
    for(i=0;i<k;i++)
    {
        if(max<b[i])
        {
            max=b[i];
        }
        c++;
    }
    if(c==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",max);
    }
}