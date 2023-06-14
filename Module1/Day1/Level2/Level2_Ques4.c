#include <stdio.h>

int bit_operations(int num, int oper_type, int pos) {
    int result;

    switch (oper_type) {
        case 1:
            result = num | (0x3 << pos);  // Set 2 bits from nth bit position
            break;
        case 2:
            result = num & ~(0x7 << pos);  // Clear 3 bits from nth bit position
            break;
        case 3:
            result = num ^ (1 << 31);  // Toggle MSB (Most Significant Bit)
            break;
        default:
            result = num;  // No operation type matched, return the original number
            break;
    }

    return result;
}

int main() {
    int number, operationType, position;

    printf("Enter the number: ");
    scanf("%d", &number);

    printf("Enter the operation type (1, 2, or 3): ");
    scanf("%d", &operationType);

    if (operationType==1 || operationType==2)
    {
        printf("Enter the bit position: ");
        scanf("%d", &position);
    }

    int result = bit_operations(number, operationType, position);

    printf("Result: %d\n", result);

    return 0;
}
