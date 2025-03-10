#include<stdio.h>
#include<math.h>
int main()
{
	int i,x,y;
	printf("Square of fist 10 natural number is:");
	for(i=1;i<=10;i++)
	{
		x=pow(i,2);
		printf("\%d ",x);
    }
	printf("\nCube of fist 10 natural number is:");  
	for(i=1;i<=10;i++)
	{  
		y=pow(i,3);
		printf("\%d ",y);				
	}
	
	return 0;	
}	

