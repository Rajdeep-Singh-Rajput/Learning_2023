#include <stdio.h>

int charType(char ch) {
    int type;

    if (ch >= 'A' && ch <= 'Z') {
        type = 1;
    } else if (ch >= 'a' && ch <= 'z') {
        type = 2;
    } else if (ch >= '0' && ch <= '9') {
        type = 3;
    } else if (ch >= 32 && ch <= 126) {
        type = 4;
    } else {
        type = 5;
    }

    return type;
}

int main() {
    char character;

    printf("Enter a character: ");
    scanf(" %c", &character);

    int result = charType(character);
    printf("\n\n---------------------------------------------------------------------------\n");
    printf("1- Type 'A' to 'Z' \n2- Type 'a' to 'z' \n3- Type '0' to '9' \n4- Other printable symbols \n5- Other Non printable symbols");
    printf("\n---------------------------------------------------------------------------\n\n");
    printf("%d\n", result);

    return 0;
}
