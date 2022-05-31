#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[1000];
    int i,c=0,len;
    scanf("%[^
]s",str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]>=97 && str[i]<=122)
        {
            c++;
        }
    }
    printf("%d",c);
}