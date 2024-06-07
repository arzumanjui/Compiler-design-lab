#include <stdio.h>
#include <string.h>

int main() {
    char mainString[100];
    char substring[50];

    printf("Enter the main string: ");
    fgets(mainString, sizeof(mainString), stdin);
    mainString[strcspn(mainString, "\n")] = '\0';

    printf("Enter the substring to search for: ");
    fgets(substring, sizeof(substring), stdin);
    substring[strcspn(substring, "\n")] = '\0';

    char *match = strstr(mainString, substring);

    if (match) {
        printf("Substring found at position: %ld\n", match - mainString);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}

