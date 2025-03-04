#include<stdio.h>

struct student{
	int id;
	char name[50];
	char add[50];
};
int main()
{
	struct student a[5];
	int i=0;
	for(i=0;i<=2;i++)
	{
		printf("\nEnter the student detail");
	    printf("\n_________________________");
	
	    printf("\nName:");
	    scanf("%s",a[i].name);
	    fflush(stdin);
	
	    printf("\nID:");
	    scanf("%d",&a[i].id);
	
	    printf("\nAddress:");
	    scanf("%s",a[i].add);		
	}

	printf("\n\nProvided details are:");
	//for display 
	for(i=0;i<=2;i++)
	{
	printf("\n");	
	printf("\nName=%s",a[i].name);
	printf("\nID is:%d",a[i].id);
	printf("\nAddress is:%s",a[i].add);		
	}





	
	return 0;
	
}