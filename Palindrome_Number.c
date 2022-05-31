#include<stdio.h>
int ispal(int n)
{
    int temp=0,d,res=0;
    temp=n;
    while(n)
    {
        d=n%10;
        res=res*10+d;
        n=n/10;
    }
    n=temp;
    if(n==res)
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
    int arr[100],i,x;
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<x;i++)
    {
        if(ispal(arr[i]))
        {
            printf("True
");
       }
        else
        {
            printf("False
");
        }
    
    }
}