#include <stdio.h>
#include <string.h>

int main() {
    char userInput[100];

    printf("Please enter a string: ");
    fgets(userInput, sizeof(userInput), stdin);

    // Remove the newline character at the end, if it exists
    userInput[strcspn(userInput, "\n")] = '\0';

    int length = strlen(userInput);

    printf("You entered: %s\n", userInput);
    printf("The length of the entered string is: %d\n", length);

    return 0;
}

