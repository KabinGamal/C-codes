#include<stdio.h>
#include<string.h>
int main()
{
	int x;
	char length[10];
	printf("Enter a word:");
	scanf("%s",length);
	x=strlen(length);
	printf("Their are %d letter in your word.",x);
	return 0;
}