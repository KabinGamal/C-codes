#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, identical = 1;

    // Input two strings
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Compare character by character
    for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            identical = 0;
            break;
        }
    }

    // Output result
    if (identical)
        printf("Strings are identical.\n");
    else
        printf("Strings are not identical.\n");

    return 0;
}
