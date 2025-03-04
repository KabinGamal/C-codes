#include<stdio.h>

int main()
{
	int i=0,firs=0,sec=1,sum,n;
	int *ptr1,*ptr2,*ptr3,*ptrn;
	
	ptr1=&firs;
	ptr2=&sec;
	ptr3=&sum;
	ptrn=&n;
	
	printf("how many term do you want:");
	scanf("%d",ptrn);
	
	printf("%d\n%d\n",*ptr1,*ptr2);
	for(i=2;i<*ptrn;i++)
	{
		*ptr3=*ptr1+*ptr2;
		*ptr1=*ptr2;
		*ptr2=*ptr3;
	    printf("%d\n",*ptr3);
	}
	printf("\n");
	return 0;
}