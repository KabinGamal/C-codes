#include<stdio.h>
int main()
{
	int i=0,j=0,temp,a[10];
	
	
	for(i=0;i<10;i++);
	{
		printf("Enter your number:");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5-1;i++);
	{
		for(j=0;j<5-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("Ascending order:");
	
	for(i=0;i<5;i++);
	{
		printf("%d",a[i]);
		
	}
	return 0;
}