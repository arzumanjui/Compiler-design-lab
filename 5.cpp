#include <stdio.h>
#include <string.h>

int main() {
    char sourceString[100];
    char destinationString[100];

    printf("Enter the source string: ");
    fgets(sourceString, sizeof(sourceString), stdin);
    sourceString[strcspn(sourceString, "\n")] = '\0'; // Remove newline character

    // String Copy
    strcpy(destinationString, sourceString); // Copy sourceString to destinationString

    printf("Copied string: %s\n", destinationString);

    // String Comparison
    char string1[100];
    char string2[100];

    printf("Enter the first string: ");
    fgets(string1, sizeof(string1), stdin);
    string1[strcspn(string1, "\n")] = '\0'; // Remove newline character

    printf("Enter the second string: ");
    fgets(string2, sizeof(string2), stdin);
    string2[strcspn(string2, "\n")] = '\0'; // Remove newline character

    int comparisonResult = strcmp(string1, string2);

    if (comparisonResult == 0) {
        printf("The strings are equal.\n");
    } else if (comparisonResult < 0) {
        printf("String1 comes before String2.\n");
    } else {
        printf("String2 comes before String1.\n");
    }

    // String Concatenation
    char string3[100];
    char string4[100];

    printf("Enter the first string for concatenation: ");
    fgets(string3, sizeof(string3), stdin);
    string3[strcspn(string3, "\n")] = '\0'; // Remove newline character

    printf("Enter the second string for concatenation: ");
    fgets(string4, sizeof(string4), stdin);
    string4[strcspn(string4, "\n")] = '\0'; // Remove newline character

    strcat(string3, string4); // Concatenate string4 to string3

    printf("Concatenated string: %s\n", string3);

    return 0;
}

