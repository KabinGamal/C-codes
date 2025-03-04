#include<stdio.h>
int main()
{
	int n,i,count;
	printf("Enter the number you want to check the number is prime or not:");
	scanf("%d",&n);
	
	for (i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("The number is prime");
	}
	else
	{
		printf("The number is not a prime number");
	}
}