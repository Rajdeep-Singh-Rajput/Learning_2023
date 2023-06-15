#include <stdio.h>

char *xstrchr(char *string, char ch) {
    while (*string != '\0') {
        if (*string == ch) {
            return string;
        }
        string++;
    }

    return NULL;
}

int main() {
    char string[100];
    char ch;

    printf("Enter a string: ");
    scanf("%s", string);

    printf("Enter a character to search: ");
    scanf(" %c", &ch);

    char *result = xstrchr(string, ch);

    if (result != NULL) {
        printf("Character found at position: %ld\n", result - string + 1);
    } else {
        printf("Character not found.\n");
    }

    return 0;
}
