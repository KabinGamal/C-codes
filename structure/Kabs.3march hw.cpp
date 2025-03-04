#include<stdio.h>
#include<string.h>

struct emp{
	int id;
	char name[50];
	char add[50];
	int sal;
	
};

void Name(struct emp a[],int n)
{
	struct emp temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(strcmp(a[j].name,a[j+1].name)>0)
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
void hsalary(struct emp a[],int n)
{
	int high=0,i=0;
	for(i=0;i<n;i++)
	{
	if (a[i].sal>a[high].sal)
	{
		high=i;
	}		
		
	}

	printf("\nEmployee with highest salary:\n");
    printf("ID: %d\n", a[high].id);
    printf("Name: %s\n", a[high].name);
    printf("Address: %s\n", a[high].add);
    printf("Salary: %d\n", a[high].sal);	
	
}
void lsalary(struct emp a[],int n)
{
	int low=0,i=0;
	for(i=0;i<n;i++)
	{
	if (a[i].sal<a[low].sal)
	{
		low=i;
	}		
	}

	printf("\nEmployee with lowest salary:\n");
    printf("ID: %d\n", a[low].id);
    printf("Name: %s\n", a[low].name);
    printf("Address: %s\n", a[low].add);
    printf("Salary: %d\n", a[low].sal);	
	
}
int main()
{
	int i=0,j=0,n=0;
	
	printf("Enter the number of employe: ");
	scanf("%d",&n);
	
	struct emp a[n];
	
	printf("\nEnter the employe detail");
	for(i=0;i<n;i++)
	{
		printf("\nName:");
		scanf("%s",a[i].name);
		fflush(stdin);
		
		printf("\nID:");
		scanf("%d",&a[i].id);
		
		printf("\nAddress:");
		scanf("%s",a[i].add);
		fflush(stdin);
		
		printf("\nSalary:");
		scanf("%d",&a[i].sal);		
	}
	
	Name(a,n);
	
	 printf("\nEmployee Records (sorted by name in ascending order):\n");
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("ID: %d\n", a[i].id);
        printf("Name: %s\n", a[i].name);
        printf("Address: %s\n", a[i].add);
        printf("Salary: %d\n", a[i].sal);
    }
	
    hsalary(a, n);
	lsalary( a, n);
	
	
	return 0;
	
}







































