#include<stdio.h>
int main()
	{
		int arr[10],i=0,temp=0; 
        for(i=0;i<=9;i++) 
        {
		    printf("\nEnter number in arr[%d]: ",i); 
            scanf("%d",&arr[i]); 
		} 
        for(i=0;i<5;i++)
        {
        	temp=arr[i]; 
            arr[i]=arr[9-i]; 
            arr[9-i]=temp;
        }
        for(i=0;i<=9;i++)
        {
        	printf("%d ",arr[i]); 
		}
		return 0;
	}
	
