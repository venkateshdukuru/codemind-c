#include<stdio.h>
int main()
{
    int n,i,x=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i*(i+1)==n)
        {
            x=1;
            break;
        }
    }
    if(x==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}