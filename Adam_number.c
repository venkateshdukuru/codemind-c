#include<stdio.h>
#include<math.h>
int main()
{
    int n,square,rem,r,rev2=0,square2,rev=0;
    scanf("%d",&n);
    
    square=n*n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    square2=rev*rev;
    while(square2>0)
    {
        r=square2%10;
        rev2=rev2*10+r;
        square2=square2/10;
    }
    if(square==rev2)
    printf("True");
    else
    printf("False");
    return 0;
}