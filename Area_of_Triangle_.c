#include <stdio.h>
#include <math.h>
int main()
{
  double a, b, c, s, area,i,j,k;

  scanf("%lf%lf%lf", &a, &b, &c);

  s= (a+b+c)/2; // Semiperimeter
  i=s-a;
  j=s-b;
  k=s-c;
  area= sqrt(s*(i*j*k));

  printf("%.2lf", area);

  return 0;
}