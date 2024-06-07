#include <stdio.h>
#include <string.h>

void removeChar(char *str, char charToRemove) {
    int sourceIndex = 0;
    int destinationIndex = 0;

    while (str[sourceIndex] != '\0') {
        if (str[sourceIndex] != charToRemove) {
            str[destinationIndex] = str[sourceIndex];
            destinationIndex++;
        }
        sourceIndex++;
    }
    str[destinationIndex] = '\0'; // Null-terminate the resulting string
}

int main() {
    char inputString[100];
    char charToRemove;

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = '\0';

    printf("Enter the character to remove: ");
    scanf(" %c", &charToRemove); // Note the space before %c to skip whitespace

    removeChar(inputString, charToRemove);

    printf("String after removing '%c': %s\n", charToRemove, inputString);

    return 0;
}

