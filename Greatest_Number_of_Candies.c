#include<stdio.h>
int main()
    {
        int n,i,j[100],k,l=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&j[i]);
        }
        scanf("%d",&k);
        for(i=0;i<n;i++)
        {
            if(j[i]>l)
            {
                l=j[i];
            }
        }
        for(i=0;i<n;i++)
        {
            if(j[i]==l)
            {
                printf("True ");
            }
            else
            {
                j[i]=j[i]+k;
                if(j[i]>=l)
                {
                    printf("True ");
                }
                else
                {
                    printf("False ");
                }
            }
        }
        return 0;
    }