15. Write a program to take 3*3 matrix input from user and sum of diagonal elements. 
#include<stdio.h> 
int main() 
 { 
  int a[3][3],i=0,j=0,sum=0; 
  for(i=0;i<=2;i++) 
 { 
  for(j=0;j<=2;j++) 
  { 
   printf("\nEnter the value in a[%d][%d]: ",i,j); 
   scanf("%d",&a[i][j]); 
  } 
 } 
 for(i=0;i<=2;i++) 
 { 
  for(j=0;j<=2;j++) 
  { 
   if(i==j) 
   { 
    sum+=a[i][j]; 
   } 
  } 
 } 
 printf("\nThe sum of diagonal elements is %d",sum); 
 return 0;
} 