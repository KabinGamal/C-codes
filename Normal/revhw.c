//7.	Write a program to reverse a string without using string handling function.
#include<stdio.h>
int main()
{
	int i=0,l;
	char word[20],temp[20];
	
	printf("Enter your word:");
	scanf("%s",word);
	
	for(i=0;word[i]!='\0';i++)
	{
		l++;
	}
	
	for(i=0;word[i]!='\0';i++)
	{
		temp[(l-1)-i]=word[i];
	}
	temp[i]='\0';
	
	for(i=0;temp[i]!='\0';i++)
	{
		word[i]=temp[i];
	}
	printf("Your reversed word is:%s",word);
	return 0;
	
}