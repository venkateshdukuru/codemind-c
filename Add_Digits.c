#include<stdio.h>
int main()
{
    int n,res,sum=0;
    scanf("%d",&n);
    while(n)
    {
        res=n%10;
        sum+=res;
        n=n/10;
        if(n==0 && sum>9)
        {
            n=sum;
            sum=0;
        }
    }
    printf("%d",sum);
}