#include<stdio.h>
int main()
{
	int i=0,a[100];
	int *ptr=a;
	

	for(i=0;i<10;i++)
	{
		printf("Enter your number:");
		scanf("%d",ptr+i);
	}
	
	printf("Your number are.\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",*(ptr+i));
		
	}
	
}