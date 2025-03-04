#include <stdio.h>

int main() {
    int n, i, j, space;
    
    // Taking input for number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Loop for each row
    for(i = 0; i < n; i++) {
        // Printing spaces
        for(space = 0; space < i; space++) {
            printf(" ");
        }
        // Printing stars
        for(j = 0; j < (2 * (n - i) - 1); j++) {
            printf("*");
        }
        // Moving to the next line
        printf("\n");
    }

    return 0;
}
