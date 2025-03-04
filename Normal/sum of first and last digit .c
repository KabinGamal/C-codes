#include <stdio.h>

int main() {
    int num, first, last, sum;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Get the last digit
    last = num % 10;

    // Find the first digit
    first = num;
    while (first >= 10) {
        first /= 10;
    }

    // Calculate sum
    sum = first + last;

    // Print the result
    printf("Sum of first and last digit: %d\n", sum);

    return 0;
}
