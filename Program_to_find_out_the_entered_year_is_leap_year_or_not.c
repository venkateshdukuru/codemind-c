#include <stdio.h>
int main()
{
    int y;
    scanf("%d",&y);

    if(y % 4 == 0)
    {
    	//Nested if else
        if( y % 100 == 0)
        {
            if ( y % 400 == 0)
               printf("True");
            else
                printf("False");
        }
        else
            printf("True");
    }
    else
        printf("False");

    return 0;
}