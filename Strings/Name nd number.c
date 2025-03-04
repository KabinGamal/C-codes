#include<stdio.h>
int main()
{
	char first[50];
	char second[50];
	
	printf("Enter your Name:");
	gets(first);
	printf("Enter your Ph number:");
	gets(second);
    char c;
    scanf("%c",&c);
    again:
    fflush(stdin);
    printf("What do you want to print \n1.Name \n2.Number\n");
    scanf("%c",&c);
    if(c==1||c==1)
    {
    	puts(first);
	}
	else if(c==2||c==2)
	{
		puts(second);
	}
	else 
	{
		printf("You have enter the wrong input!!!!!");
	}
	goto again;
	return 0;
}
