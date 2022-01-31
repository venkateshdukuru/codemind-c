#include<stdio.h>
int main()
{
    int m,n,i,min,hcf=1;
    scanf("%d%d",&m,&n);
    min=m>n?n:m;
    for(i=min;i>=1;i--)
    {
        if(m%i==0 && n%i==0)
        {
            hcf=i;
            break;
        }
    }
        printf("%d",hcf);

    return 0;
}