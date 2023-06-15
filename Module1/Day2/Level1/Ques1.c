#include <stdio.h>

void printExponent(double x) {
    unsigned long long *ptr = (unsigned long long*)&x;
    unsigned long long exponent = (*ptr >> 52) & 0x7FF;

    // Convert exponent to hexadecimal
    printf("Hexadecimal exponent: 0x%llX\n", exponent);

    // Convert exponent to binary
    printf("Binary exponent: 0b");
    for (int i = 11; i >= 0; i--) {
        unsigned long long bit = (exponent >> i) & 1;
        printf("%llu", bit);
    }
    printf("\n");
}

int main() {
    double x;
    printf("Enter a double value: ");
    scanf("%lf", &x);

    printExponent(x);

    return 0;
}
