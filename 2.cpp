#include <stdio.h>
#include <string.h>

int main() {
    char userInput[100];

    printf("Please enter something: ");
    fgets(userInput, sizeof(userInput), stdin);

    // Remove the newline character at the end, if it exists
    userInput[strcspn(userInput, "\n")] = '\0';

    printf("You entered: %s\n", userInput);

    return 0;
}

