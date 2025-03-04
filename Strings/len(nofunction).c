#include<stdio.h>
int main()
{
	int i,count;
	char len[10];
	printf("Enter your word:");
	scanf("%s",len);
	for(i=0;len[i]!='\0';i++)
	{
		count++;
	}
	printf("Their are %d letter in your word.",count);
}