//12.	Write a program to take 10 numbers from user and only display numbers which are prime
#include <stdio.h>

int main() {
    int numbers[10];

    printf("Enter 10 numbers: \n");
    for (int i = 0; i < 10; i++)
	{
        scanf("%d", &numbers[i]);
    }

    printf("Prime numbers are: ");
    for (int i = 0; i < 10; i++) 
	{
        int num = numbers[i];
        int isPrime = 1;

        if (num < 2) 
		{
            isPrime = 0;
        } else {
            for (int j = 2; j * j <= num; j++) 
			{
                if (num % j == 0) 
				{
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime) 
		{
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}
