#include<stdio.h>
#include<string.h>

int main()
{
	int result,name;
	char str1[50];
	char str2[50];
	
	printf("Enter your name:");
	scanf("%c",&name);
	
	printf("create your password:\n");
	scanf("%s",str1);
	
	printf("Enter your password\n");
	scanf("%s",str2);
	
	result = strcmp(str1,str2);
	
	if(result==0)
	{
		printf("Name is %c",name);
		
	}
	else
	{
		printf("You have enter wrong password");
	}
}