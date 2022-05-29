#include<stdio.h>
int ispal(int n)
{
    int d,res=0,temp;
    temp=n;
    while(n)
    {
        d=n%10;
        res=res*10+d;
        n=n/10;
    }
    if(temp==res)
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
    int n,pp,np;
    scanf("%d",&n);
    for(pp=n-1;;pp-=1)
    {
        if(ispal(pp))
        {
            break;
        }
    }
    for(np=n+1;;np+=1)
    {
        if(ispal(np))
        {
            break;
        }
    }
    if(n-pp>np-n)
    {
        printf("%d",np);
    }
    if(n-pp<np-n)
    {
        printf("%d",pp);
    }
    if(n-pp==np-n)
    {
        printf("%d %d",pp,np);
    }
}