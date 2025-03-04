#include <stdio.h>

int main() 
{
    int  i=0,j=0,k=0;

    for(i=0;i<7;i++) 
	{
        for(j=0;j<i;j++) 
		{
            printf(" ");
        }
        for(k=0;k<(2*(7-i)-1); j++) 
		{
            printf("*");
        }
        printf("\n");
    }

    return 0;
}