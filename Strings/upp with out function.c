#include<stdio.h>
int main()
{
	int i=0;
	char upp[10];
	printf("Enter a word or sentence:");
	scanf("%s",upp);
	for(i=0;upp[i]!='\0';i++)
	{
		if(upp[i]>=65&&upp[i]<=90)
		{
			continue;
		}
		else if(upp[i]>=97&&upp[i]<=122)
		{
			upp[i]=upp[i]-32;
		}
		else
		{
			continue;
		}
		printf("%s",upp[i]);
	}
	return 0;
	
}