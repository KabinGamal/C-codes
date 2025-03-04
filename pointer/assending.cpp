#include<stdio.h>
int main()
{
	int i=0,j=0,t=0,arry[5];
	int *p=arry;
//	int *t=&temp;
	
	for(i=0;i<5;i++)
	{
		printf("Enter your number:");
		scanf("%d",(p+i));
	}
	
	for(i=0;i<5-1;i++)
	{
		for(j=0;j<5-i-1;j++)
		{
			if(p[j]>p[j+1])
			{
				t=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=t;
			}
		}
	}
	
	printf("Ascending:\n");
	
	for(i=0;i<5;i++)
	{
		printf("%d\n",*(p+i));
	
	}
	
	
}