#include<stdio.h>

struct std{
	char name[50];
	int id;
	char add[50];
	int marks;
    };
    
int main()
{

	struct std a[10];
	int i=0,j=0,n;
	struct std temp;

	printf("How many student data you want:");
	scanf("%d",&n);
	
	printf("\nEnter the student detail");
   
    for(i=0;i<n;i++)
    {
	    printf("\nName:");
	    scanf("%s",a[i].name);
	    fflush(stdin);
    	printf("ID:");
    	scanf("%d",&a[i].id);	
    	printf("Address:");
    	scanf("%s",a[i].add);	
	    printf("Marks:");
    	scanf("%d",&a[i].marks);
    }

	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j].marks>a[j+1].marks)
			{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;				
			}

		}
	}
	printf("\n__________________");
	printf("\nAscending order");
	printf("\n__________________");
	for(i=0;i<n;i++)
	{
	printf("\n");	
	printf("\nName=%s",a[i].name);
	printf("\nID is:%d",a[i].id);
	printf("\nAddress is:%s",a[i].add);
	printf("\nMarks:%d",a[i].marks);		
	}	
return 0;
}
