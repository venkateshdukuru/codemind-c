#include<stdio.h>
int isprime(int n)
{
    int i,fc=0;
    for(i=1;i<n;i++)
    {
    	if(n%i==0)
    	{
    		fc+=2;
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
    int n,d,c=0,cc=0;
    scanf("%d",&n);
    if(isprime(n))
    {
        while(n)
        {
            d=n%10;
            c+=1;
            if(isprime(d))
            {
                cc+=1;
            }
            n=n/10;
        }
        if(c==cc)
        {
            printf("Mega Prime");
        }
        else
        {
            printf("Not Mega Prime");
        }
    }
    else
    {
        printf("Not Mega Prime");
    }
}