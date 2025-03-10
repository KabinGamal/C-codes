#include<stdio.h>
#include<math.h>
int main()
{
	int n=0,sum=0,rem=0,temp=0,c=0;
	
	printf("Enter the number :");
	scanf("%d",&n);
	temp=n;
	
	while(n!=0)
	{
		n=n/10;
		c++;
	}
	n=temp;
//	printf("\n%d",n);
	while(n>0)
	{
		rem=n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
	}
	if(temp==sum)
	{
		printf("\nAmstrong");
	}
	else
	{
		printf("\nNot Amstrong");
	}
	return 0;
	
}