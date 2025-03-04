#include <stdio.h>

int main() {
    char word1[50], word2[50], combined[100];
    int i, j;

    // Taking input for both words
    printf("Enter first word: ");
    scanf("%s", word1);
    
    printf("Enter second word: ");
    scanf("%s", word2);

    // Copying word1 into combined
    for (i = 0; word1[i] != '\0'; i++) 
	{
        combined[i] = word1[i];
    }

    // Adding a space
    combined[i] = ' ';
    i++;

    // Copying word2 into combined
    for (j = 0; word2[j] != '\0'; j++, i++) 
	{
        combined[i] = word2[j];
    }

    // Null terminate the combined string
    combined[i] = '\0';

    // Output the combined string
    printf("Combined Word: %s\n", combined);

    return 0;
}
