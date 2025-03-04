//15.	Write a program to take 3x3 matrix input from user and calculate sum of diagonal elements.
#include<stdio.h>
int main()
{
	int i=0,j=0,sum=0,a[3][3];
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("\nEnter the of a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			if(i==j)
			{
				sum+=a[i][j];
			}
		
		}
	}
	printf("Sum of diagonal element is %d:",sum);
	return 0;
}