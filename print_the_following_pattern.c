#include<stdio.h>
int main()
{
    int i,n,j;
    scanf("%d
",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
        printf("%d",j);
    }
    printf("
");
    }
    return 0;
}