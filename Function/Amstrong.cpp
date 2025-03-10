#include<stdio.h>
#include<math.h>
void amstrong(int);
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	amstrong(n);
	return 0;	
}
void amstrong(int x)
{
	int sum=0,rem=0,temp,c=0;
	temp=x;
	while(x!=0)
	{
		x=x/10;
		c++;
	}
	x=temp;
	while(x>0)
	{
		rem=x%10;
		sum=sum+pow(rem,c);
		x=x/10;
		
	}
	if(sum==temp)
	{
		printf("Amstrong number");
	}
	else
	{
		printf("Not Amstrong number");
	}
}
