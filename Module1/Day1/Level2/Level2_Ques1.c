#include <stdio.h>

int findGreatest(int num1, int num2, int num3) {
    int greatest = num1;  // Assume num1 is the greatest initially

    if (num2 > greatest) {
        greatest = num2;  // Update greatest if num2 is greater
    } else if (num3 > greatest) {
        greatest = num3;  // Update greatest if num3 is greater
    }

    return greatest;
}

int main() {
    int number1, number2, number3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &number1, &number2, &number3);

    int result = findGreatest(number1, number2, number3);

    printf("The greatest number is: %d\n", result);

    return 0;
}
