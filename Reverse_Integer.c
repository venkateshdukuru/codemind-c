#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int rev_num=0;
    while(n!=0)
    {
        rev_num=rev_num*10+n%10;
        n=n/10;
        
    }
    printf("%d",rev_num);
}