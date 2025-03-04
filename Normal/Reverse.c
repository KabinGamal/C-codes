#include<stdio.h>
int main()
{//536
	int num=0,r=0;
	printf("Enter the number to reverse it:");
	scanf("%d",&num);
	
	while(num>0)
	{
		r=num%10;
		printf("%d",r);
		num=num/10;
	}
return 0;		
}