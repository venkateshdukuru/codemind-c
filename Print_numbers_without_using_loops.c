#include <stdio.h>
void print(int, int);
int main()
{
  int n;
  scanf("%d",&n);
  if (n>=1&&n<=10000)
  {
  print(1,n);
  }
  else
  printf("The Number Series is Not Possible Print");
  return 0;
}
void print(int s,int n)
{
  if (s>n)
    return;
  printf("%d ",s);
  print(++s,n);
}