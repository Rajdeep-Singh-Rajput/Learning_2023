#include <stdio.h>

int main() {
    float operand1, operand2, result;
    char operator;

    printf("Enter Operand 1: ");
    scanf("%f", &operand1);

    printf("Enter Operator: ");
    scanf(" %c", &operator);

    printf("Enter Operand 2: ");
    scanf("%f", &operand2);

    switch (operator) {
        case '+':
            result = operand1 + operand2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = operand1 - operand2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = operand1 * operand2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (operand2 != 0) {
                result = operand1 / operand2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            break;
    }

    return 0;
}
