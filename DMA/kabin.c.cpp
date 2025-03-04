#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i=0,j=0,n1=0,n2,total,temp=0;
	int *p;
	
	printf("How many number do you want:");
	scanf("%d",&n1);
	
	p=(int*)calloc(n1,sizeof(int));
	
	printf("Enter %d numbers\n",n1);
	for(i=0;i<n1;i++)
	{
		scanf("%d",&p[i]);
	}
	
	printf("The numbers are:");
	for(i=0;i<n1;i++)
	{
		printf("%d ",p[i]);
	}
	
	printf("\nHow many more number want to add:");//for new numbwes
	scanf("%d",&n2);
	
	p=(int*)realloc(p,n1+n2*sizeof(int));
	if(p==NULL)
	{
		printf("Meamory was not allocate");
	}
	printf("Enter %d more numbers\n",n2);
	for(i=n1;i<n1+n2;i++)
	{
		scanf("%d",&p[i]);
	}
	
	printf("\nAll numbers are:");
	for(i=0;i<n1+n2;i++)
	{
		printf("%d ",p[i]);
	}
	total=n1+n2;
	for(i=0;i<total-1;i++)
	{
		for(j=0;j<total-i-1;j++)
		{
			if(p[j]>p[j+1])
			{
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
	}

    printf("\nThe assecding order of provided numbers are\n");
    for(i=0;i<total;i++)
    {
    	printf("%d ",p[i]);
	}
 	free(p);
	return 0;
}