#include <stdio.h>

// Function to convert a decimal number to BCD format
unsigned char decimalToBCD(unsigned char decimal) {
    unsigned char tens = decimal / 10;
    unsigned char units = decimal % 10;
    return (tens << 4) | units;
}

int main() {
    unsigned char decimal;
    printf("Enter a decimal number (0-99): ");
    scanf("%hhu", &decimal);

    unsigned char bcd = decimalToBCD(decimal);
    printf("BCD representation: %hhu\n", bcd);

    return 0;
}
