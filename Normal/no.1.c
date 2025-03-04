#include<stdio.h>
int main ()
{
	int i=0,j=0;
	char word[10]="NEPAL";
	
	for(i=0;i<=5;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c",word[j]);
		}
		printf("\n");
	}
	return 0;
}