#include<stdio.h>
int main()
{
	int i=0,j=0,n;
	char a[10][10];
	
	printf("How many name do you want:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter %d.name:",i+1);
	    scanf("%s",a[i]);
	    getchar();
	}
}