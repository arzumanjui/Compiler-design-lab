#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Remove the newline character at the end, if it exists
    inputString[strcspn(inputString, "\n")] = '\0';

    printf("You entered: %s\n", inputString);

    return 0;
}

