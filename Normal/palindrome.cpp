#include<stdio.h>
int main()
{
	int n=0,rem=0,sum=0,temp;
	printf("Enter the number:");
	scanf("%d",&n);
	temp=n;
	
	while(n>0)
	{
		rem=n%10;
		sum=(sum*10)+rem;
		n=n/10;
	}
	if(sum==temp)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not");
	}
}