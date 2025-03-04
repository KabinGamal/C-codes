//9.	Write a program to count no of spaces, vowels in a sentence input by the user
#include<stdio.h>
int main()
{
	int i=0,space=0,vow=0;
	char str1[50];
	printf("Enter your sentence:");
	gets(str1);
	
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]==32)
		{
			space++;
		}
		else if(str1[i]=='a'||str1[i]=='A'||str1[i]=='e'||str1[i]=='E'||str1[i]=='i'||str1[i]=='I'||str1[i]=='o'||str1[i]=='O'||str1[i]=='u'||str1[i]=='U')
		{
			vow++;
		}
	}
	printf("Their are %d space in the sentence.\n",space);
	printf("Their are %d vowels in the sentence.",vow);
	
}