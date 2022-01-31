#include<stdio.h>
int main()
{
    int n;
    printf("");
    scanf("%d",&n);
    int m=n;
    for(int i=1;i<=n;i++)
    {
       for(int j=1;j<=n;j++)
       {
           if(i==j||j==m)
           printf("x");
           else
           printf("0");
       }
       printf("
");
       m--;
    }
    return 0;
}