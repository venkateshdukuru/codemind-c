#include<stdio.h>
int main()
{
    int n,sum=0,product=1;
    scanf("%d",&n);
    while(n>0)
    {
        sum=sum+n%10;
        product=product*(n%10);
        n=n/10;
    }
    printf("%d",product-sum);
    return 0;
}