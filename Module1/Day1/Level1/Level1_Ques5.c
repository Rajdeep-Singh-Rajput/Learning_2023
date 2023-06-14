#include <stdio.h>

int bit_operations(int num, int oper_type) {
    switch (oper_type) {
        case 1:
            num = num | 0x00000001; // Set 1st bit
            break;
        case 2:
            num = num & 0x7FFFFFFF; // Clear 31st bit
            break;
        case 3:
            num = num ^ 0x00010000; // Toggle 16th bit
            break;
        default:
            printf("Invalid operation type\n");
            break;
    }

    return num;
}

int main() {
    int number, operationType;

    printf("Enter a 32-bit integer: ");
    scanf("%d", &number);

    printf("Enter the operation type (1, 2, or 3): ");
    scanf("%d", &operationType);

    int result = bit_operations(number, operationType);

    printf("Result: %d\n", result);

    return 0;
}
