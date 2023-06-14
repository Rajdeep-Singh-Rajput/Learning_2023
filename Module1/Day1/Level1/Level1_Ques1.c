#include <stdio.h>

int find_biggest_ternary_operator(int a, int b) {
    return (a > b) ? a : b;
}

int find_biggest_if_else(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    
    int result_if_else = find_biggest_if_else(num1, num2);
    int result_ternary_operator = find_biggest_ternary_operator(num1, num2);
    
    printf("The biggest number using if-else is: %d\n", result_if_else);
    printf("The biggest number using ternary operator is: %d\n", result_ternary_operator);
    
    return 0;
}
