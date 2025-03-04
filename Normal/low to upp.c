//10.	Write a program to convert a lower case string to upper case string without using string handling function.
#include<stdio.h>
int main()
{
	int i=0;
	char str1[20];
	printf("Enter your word:");
	scanf("%s",str1);
	
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]>=97&&str1[i]<=122)
		{
			str1[i]=str1[i]-32;
		}
		else
		{
			continue;
		}		
	}
	printf("%s",str1);
	return 0;
}