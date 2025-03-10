#include<stdio.h>
#include<math.h>
int main()
{
	int n=0,c=0,temp=0,rem=0,sum=0;
	
	printf("Enter the number:");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		n=n/10;
		c++;
	}
	while(n>0)
	{
		rem=n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
	}
	printf("\n%d",c);
	printf("\n%d",sum);
	if(temp==sum)
	{
		printf("\nAmstrong number");
	}
	else
	{
		printf("\nNot Amstrong");
	}

	
}
