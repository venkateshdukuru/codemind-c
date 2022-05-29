#include<stdio.h>
int fun(int n)
{
    int d,c=0,cc=0,temp;
    temp=n;
    while(n)
    {
        d=n%10;
        if(d==0)
        {
            return 0;
        }
        n=n/10;
        c++;
        if(temp%d==0)
        {
            cc++;
        }
    }
    if(c==cc)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int m,n,i;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(fun(i))
        {
            printf("%d ",i);
        }
    }
    
}