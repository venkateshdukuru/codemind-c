#include<stdio.h>
int fun(int n)
{
    int i,pro=1;//5
    for(i=1;i<=n;i++)
    {
        pro*=i;
    }
    return pro;
}
int main()
{
    int n,a[100],i,res,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        x=a[i];
        res=fun(x);
        printf("%d
",res);
    }
}