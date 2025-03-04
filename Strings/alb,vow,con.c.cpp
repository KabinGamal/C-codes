#include<stdio.h>
int main ()
{
	int numb,i,space=0,total=0,vow=0,spec=0,cons=0,alph=0;
	char word[1000];
	printf("Enter your sentence:");
	gets(word);
	for(i=0;word[i]!='\0';i++)
	{
		total++;
		if(word[i]>=48&&word[i]<=57)
		{
			numb++;
		}
		else if(word[i]==32)
	{
		space++;
	}
	else if(word[i]=='a'||word[i]=='A'||word[i]=='e'||word[i]=='E'||word[i]=='i'||word[i]=='I'||word[i]=='o'||word[i]=='O'||word[i]=='u'||word[i]=='U')
    
	{
		vow++;
	}
	else if(word[i]>=65&&word[i]<=122)
	
	{
		alph++;
			
		
	}
	else
	{
		spec++;
	}
	
	
	}
	
	printf("There are total %d number in the sentence\n",numb);
	printf("There are total %d space  in the sentence\n",space);
	printf("There are total %d word in the sentence\n",space+1);
	printf("There are total %d vowel in the sentence\n",vow);
	printf("There are total %d special character in the sentence\n",spec);
	printf("There are total %d Alphabets in the sentence\n",alph);
	
	
}