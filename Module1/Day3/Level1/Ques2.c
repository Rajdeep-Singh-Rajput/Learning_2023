#include <stdio.h>

void print_bits(int num) {
    int i;
    unsigned int mask = 1 << 31; // Start with the leftmost bit

    for (i = 0; i < 32; i++) {
        // Check if the bit is set or unset
        if (num & mask) {
            printf("1");
        } else {
            printf("0");
        }

        // Shift the mask to the right
        mask >>= 1;
    }
}

int main() {
    int num;

    printf("Enter a 32-bit integer: ");
    scanf("%d", &num);

    printf("Bits: ");
    print_bits(num);

    return 0;
}
