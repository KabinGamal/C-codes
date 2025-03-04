#include<stdio.h>
int main()
{
    int a,b,c,d,sum;
    int *p;
	int *q;
	int *r;
	int *s;
	int *add;
    
    p=&a;
    q=&b;
    r=&c;
    s=&d;
    add=&sum;
    printf("Enter four numbers:");
    scanf("%d %d %d %d",p,q,r,s);
    
	*add=*p+*q+*r+*s;
	
	printf("sum is %d ",*add);
	
}