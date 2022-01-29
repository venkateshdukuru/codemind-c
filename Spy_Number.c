#include<stdio.h>
int main()
{
    int n,f=1,sum=0,r,i;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        f=f*r;
        sum=sum+r;
        n=n/10;
    }
    if(sum==f)
    printf("Spy Number");
    else
    printf("Not Spy Number");
}