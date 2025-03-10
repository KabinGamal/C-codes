#include<stdio.h>
void palindrome(int);
int main()
{
	int n=0;
	printf("Enter a number:");
	scanf("%d",&n);
	palindrome(n);
	return 0;
}
void palindrome(int x)
{
	int sum=0,rem=0,temp;
	temp=x;
	while(x>0)
	{
		rem=x%10;
		sum=(sum*10)+rem;
		x=x/10;
	}
	if(temp==sum)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not a prime");
	}
}