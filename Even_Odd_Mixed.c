#include<stdio.h>
int main()
{
    int n,rem,e=0,o=0;
    scanf("%d",&n);
    
    while(n>0)
    {
        rem=n%10;
        if(rem%2==0)
        e=1;
        else
        o=1;
        n=n/10;
    }
    if(e & !o)
    printf("Even");
    else if(o & !e)
    printf("Odd");
    else if(e&&o)
    printf("Mixed");
return 0;

}