#include<stdio.h>
#include<string.h>
int main()
{
	
	char up[20];
	printf("Enter the word to convert it into capital letter:");
	gets(up);
	/*for single word
	scanf("%s",up);*/
	strupr(up);
	
	printf("Final word is %s ",up);
	
}