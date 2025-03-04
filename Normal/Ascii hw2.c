//Write a program to compare whether two strings are identical or not without using string handling function
#include<stdio.h>
int main()
{
	int i=0,count=0;
	char str1[50];
	char str2[50];
	
	printf("Enter your first word:");
	scanf("%s",str1);
		
	printf("Enter your second word:");
	scanf("%s",str2);
	
	for(i=0;str1[i]!='\0'||str2[i]!='\0';i++)
	{
		if(str1[i]!=str2[i])
		{
			count++;
		}
	}
	if(count==0)
	{
		printf("The word is identical");
	}
	else
	{
		printf("The word is not identical");
	}
	return 0;
}