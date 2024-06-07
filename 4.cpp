#include <stdio.h>
#include <string.h>

int main() {
    char userInput[100];

    printf("Please enter a string: ");
    fgets(userInput, sizeof(userInput), stdin);

    // Remove the newline character at the end, if it exists
    userInput[strcspn(userInput, "\n")] = '\0';

    int length = strlen(userInput);

    if (length > 0) {
        printf("First character: %c\n", userInput[0]);
        printf("Last character: %c\n", userInput[length - 1]);
    } else {
        printf("The entered string is empty.\n");
    }

    return 0;
}

