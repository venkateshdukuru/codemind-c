#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,p;
    scanf("%d%d%d",&x,&y,&m);
    p=pow(x,y);
    m=p%m;
    printf("%d",m);
    return 0;
}