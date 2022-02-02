#include <stdio.h>  
  
int main() {  
  int n,m;  
  scanf("%d",&n);  
  for(int i=n;i>=1;i--)  
  {  
    for(int j=1;j<=n;j++)  
    {  
       if(i==j || j==(n-i+1))  
       {  
         printf("%d ",i);  
       }  
       else  
       {  
         printf(" ");  
       }  
    }  
    printf("
");  
  }  
  return 0;  
}