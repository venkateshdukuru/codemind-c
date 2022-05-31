#include<stdio.h>
int fun(int num)
{
    int i,fc=0;
    for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			fc++;	
		}	
	}
	if(fc==2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
    int n,a[100],i;
    float sum=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(fun(a[i]))
        {
            sum+=a[i];
            c+=1;
        }
    }
    printf("%.2f",sum/c);
}