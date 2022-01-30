#include<stdio.h>
int main()
{
	int no,b,rev=0,cpy;
	scanf("%d",&no);
	cpy=no;
	while(no!=0)
	{
		b=no%10;
		rev=rev*10+b;
		no=no/10;
	}
	if(cpy==rev)
	printf("True");
	else
	printf("False");
}