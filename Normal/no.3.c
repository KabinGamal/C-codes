#include<stdio.h>
int main()
{
	int i=0,j=0,k=0;
	for(i=0;i<=7;i++)
	{
		for(j=7;j>i;j--)
		{
			printf(" ");
			
		}
		for(k=1;k<=i;k++)
		{
			printf("* ");
			
		}
		printf("\n");
	}
}