//Write a program to print ASCII values of each and every character of the string given by the user
#include<stdio.h>
//#include<string.h>
int main()
{
	char str[15];
	int i=0,j=0;
	printf("Enter your word:");
	scanf("%s",str);
	
	for(i=0;str[i]!='\0';i++)
	{
		printf("The ASCII value of %c is %d\n",str[i],str[i]);
	}
	return 0;
}