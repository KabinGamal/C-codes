#include<stdio.h>
#include<string.h>

int main()
{
	int i=0,j=0,n;
	char a[50][20],temp[20];
	
	printf("Enter how many name do you want to enter:");
	scanf("%d",&n);
	
	//for input
	for(i=0;i<n;i++)
	{
		printf("Enter your %d.name:",i+1);
		fflush(stdin);
	    gets(a[i]);
	}
	
	//fro ascending
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{			
			if(strcmp(a[i],a[j])>0)
			{
			strcpy(temp,a[i]);
			strcpy(a[i],a[j]);
			strcpy(a[j],temp);
			}			
		}
	}
	
	
	// for output
	printf("Ascending order is\n");
	for(i=0;i<n;i++)
	{
		printf("%d.%s\n",i+1,a[i]);
	
	}
	return 0;
}