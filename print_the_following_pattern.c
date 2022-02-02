#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
        for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("%d", i);
        }
        printf("
");
    }

    return 0;
}