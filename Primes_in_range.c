#include<stdio.h>  
#include<math.h>  
  
int isPrime(int num)  
{  
    int inum = sqrt(num), prime = 1, count;  
  
    for(count = 2; count <= inum; count++)  
    {  
         if(num % count == 0)  
         {  
            prime = 0;  
            break;  
         }  
    }  
  
    return(prime);  
}  
  
int main()  
{  
    int start, end, temp, num, slno = 0;  
  
    scanf("%d%d", &start, &end);  
  

    if(start > end)  
    {  
        temp  = start;  
        start = end;  
        end   = temp;  
    }  
  

    for(num = start; num <= end; num++)  
    {  
        if(num == 1)  
        {  
            continue;  
        }  
  
        if( isPrime(num) )  
        {  
            slno++;  
         }  
    }  
  
    printf("%d",slno);  
}
  