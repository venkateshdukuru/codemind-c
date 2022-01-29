#include<stdio.h>
int main()
{
    int L,B,W,C,area,Tot_cost;
    scanf("%d%d%d%d",&L,&B,&W,&C);
    
    if(L<=W+W || B<=W+W)
    printf("Impossible");
    else
    {
        area=L*B-((L-2*W)*(B-2*W));
        Tot_cost=area*C;
        
        printf("%d",Tot_cost);
    }
    return 0;
}