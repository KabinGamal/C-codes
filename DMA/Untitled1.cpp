#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, n = 5, new_n, total_n, temp;

    // Allocate memory for 5 numbers
    arr = (int*) calloc(n, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Taking input for initial 5 numbers
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display initial numbers
    printf("Entered numbers: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Asking how many more numbers to add
    printf("\nHow many more numbers to add? ");
    scanf("%d", &new_n);
    
    // Reallocate memory for additional numbers
    total_n = n + new_n;
    arr = (int*) realloc(arr, total_n * sizeof(int));
    if (arr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // Taking input for new numbers
    printf("Enter %d more numbers:\n", new_n);
    for (int i = n; i < total_n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorting numbers in ascending order (Bubble Sort)
    for (int i = 0; i < total_n - 1; i++) {
        for (int j = 0; j < total_n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Display sorted numbers
    printf("Sorted numbers in ascending order: ");
    for (int i = 0; i < total_n; i++) {
        printf("%d ", arr[i]);
    }

    // Free allocated memory
    free(arr);
    
    return 0;
}

