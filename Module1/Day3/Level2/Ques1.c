#include <stdio.h>

// Function to set a bit at a given position in an 8-bit number
unsigned char setBit(unsigned char num, int pos) {
    return num | (1 << pos);
}

// Function to clear a bit at a given position in an 8-bit number
unsigned char clearBit(unsigned char num, int pos) {
    return num & ~(1 << pos);
}

// Function to toggle a bit at a given position in an 8-bit number
unsigned char toggleBit(unsigned char num, int pos) {
    return num ^ (1 << pos);
}

int main() {
    unsigned char num;
    int pos;

    printf("Enter an 8-bit number: ");
    scanf("%hhu", &num);

    printf("Enter the position of the bit (0-7): ");
    scanf("%d", &pos);

    // Set the bit at the given position
    unsigned char setResult = setBit(num, pos);
    printf("After setting the bit: %hhu\n", setResult);

    // Clear the bit at the given position
    unsigned char clearResult = clearBit(num, pos);
    printf("After clearing the bit: %hhu\n", clearResult);

    // Toggle the bit at the given position
    unsigned char toggleResult = toggleBit(num, pos);
    printf("After toggling the bit: %hhu\n", toggleResult);

    return 0;
}
