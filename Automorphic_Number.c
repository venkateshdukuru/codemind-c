#include<stdio.h>
int main()
{
    int n,sq,d,c=0,d1,rev=0,res=0,d2,temp;
    scanf("%d",&n);
    temp=n;
    sq=n*n;
    while(n)
    {
        d=n%10;
        n=n/10;
        c++;
    }
    while(c)
    {
        d1=sq%10;
        rev=rev*10 +d1;
        sq=sq/10;
        c--;
    }
    while(rev)
    {
        d2=rev%10;
        res=res*10 +d2;
        rev=rev/10;
    }
    if(temp==res)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}