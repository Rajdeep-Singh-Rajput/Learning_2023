#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100

void encodeString(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        str[i] = str[i] + 1;  // Add 1 to each character
    }
}

void decodeString(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        str[i] = str[i] - 1;  // Subtract 1 from each character
    }
}

int main() {
    char originalString[MAX_LENGTH];
    char encodedString[MAX_LENGTH];

    printf("Enter a string: ");
    fgets(originalString, MAX_LENGTH, stdin);
    originalString[strcspn(originalString, "\n")] = '\0';  // Remove trailing newline character

    strcpy(encodedString, originalString);

    // Encode the string
    encodeString(encodedString);
    printf("Encoded string: %s\n", encodedString);

    // Decode the string
    decodeString(encodedString);
    printf("Decoded string: %s\n", encodedString);

    return 0;
}
