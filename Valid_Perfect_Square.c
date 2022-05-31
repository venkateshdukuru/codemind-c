#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,a[100];
    scanf("%d
",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d
",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int c=0,j;
        for(j=1;j<a[i];j++)
        {
            if(j*j == a[i])
            {
                c=1;
                break;
            }
        }
        if(c==1)
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