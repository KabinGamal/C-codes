//11.	//Write a program to combine two different words into one without using string handling function (e.g.: word 1: kist, word 2: college, Result: kist college)
#include<stdio.h>
int main()
{
	int i=0,j=0;
	char word1[]="kist";
	char word2[]="college";
	char temp[50];
	
	for(i=0;word1[i]!='\0';i++)
	{
		temp[i]=word1[i];
	}
	temp[i]=' ';
	i++;
	
	for(j=0;word2[j]!='\0';j++,i++)
	{
		temp[i]=word2[j];
	}
	temp[i]='\0';
	
	printf("Combined word is %s",temp);
	
}