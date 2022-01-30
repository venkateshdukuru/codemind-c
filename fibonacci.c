#include<stdio.h>
int main()
{
 int no,a,b=1,c=0;
 scanf("%d",&no);
 for(int i=1;i<=no;i++)
 {
 	printf("%d ",c);
 	a=b;
 	b=c;
 	c=a+b;
 }
	
}