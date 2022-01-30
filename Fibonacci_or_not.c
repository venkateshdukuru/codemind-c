#include<stdio.h>
#include<math.h>
int main()
{
 int no,a,b,c;
 scanf("%d",&no);
 	
 	a=0;
 	b=1;
 	if(no==0)
 	printf("true");
 	c=a+b;
 	while(c<no)
 	{
 	    a=b;
 	    b=c;
 	    c=a+b;
 	}
 	if(c==no)
 	printf("True");
 	else
 	printf("False");

	
}