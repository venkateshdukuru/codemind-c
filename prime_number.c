#include<stdio.h>
int main()
{
	int no,m=0;
	scanf("%d",&no);
	for(int i=2;i<=no-1;i++)
	{
		if(no%i==0)
		{
			printf("not a prime");
			m=1;
			break;
		}
	}
	if(m==0)
	printf("prime");
}