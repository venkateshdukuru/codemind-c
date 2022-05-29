#include<stdio.h>
int main()
{
    long long int res,n;
    scanf("%lld",&n);
    if(n%10==0)
    {
        res=n/10;
        printf("%lld",res);
        
    }
    else
    {
        if(n>0)
        
    {
    res=n/10;
    printf("%lld",res);
}
else
{
    res=n/10;
    res-=1;
    printf("%lld",res);
}

}
}