#include<stdio.h>
int main()
{
    int n,r,h,tab;
    scanf("%d%d",&n,&h);
    for(r=1;r<=h;++r)
    {
        if(r%2!=0)
        printf("%d x %d = %d
",n,r,n*r);
    }
    return 0;
}