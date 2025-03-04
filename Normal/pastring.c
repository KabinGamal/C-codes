#include<stdio.h>
#include<string.h>

int main()
{
	int result,name,flag;
	char str1[10],str2[10];
		printf("Create your password:");
	scanf("%s",str1);
	
	printf("Enter your password:");
	scanf("%s",str2);
	
	result=strcmp(str1,str2);
	
	if(result==0)
	{
	    printf("Enter your name:");
	    scanf("%d",&name);	
		
		
	}
	else
	{
		printf("You have enter wrong password \n please try again");
		
	}
	
	

	

	
	
}