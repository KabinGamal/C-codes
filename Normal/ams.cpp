#include<stdio.h>
#include<math.h>
void amstrong(int);
int main()
{
	int n=0;
	printf("Enter the number:");
	scanf("%d",&n);
	amstrong(n);
	return 0;
}
void amstrong(int x)
{
	int temp=0,sum=0,rem=0,c=0;
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
		sum=(sum*10)+rem;
		x=x%10;
	}
	if(temp==sum)
	{
		printf("Amstrong");
	}
	else
	{
		printf("Not amstrong");
	}
}
