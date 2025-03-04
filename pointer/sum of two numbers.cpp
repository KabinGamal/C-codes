#include<stdio.h>
int main()
{
	int a,b,sum;
	int *ptr1;
	int *ptr2;
	int *add;
	
	ptr1=&a;
	ptr2=&b;
	add=&sum;
	printf("Enter the first value:");
	scanf("%d",ptr1);
	
	printf("Enter the second value:");
	scanf("%d",ptr2);
	
	*add=*ptr1+*ptr2;
	
	printf("sum is %d:",*add);
	
	
}