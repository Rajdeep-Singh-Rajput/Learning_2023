#include <stdio.h>

void printNumbers(int start, int end) {
    int i;
    if (start < end) {
        for (i = start; i <= end; i++) {
            printf("%d", i);
        }
    } else {
        for (i = start; i >= end; i--) {
            printf("%d", i);
        }
    }
}

void printSpaces(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf(" ");
    }
}

void printPattern(int n) {
    int i;
    for (i = n; i >= 1; i--) {
        printNumbers(1, i);
        printSpaces(2 * (n - i));
        printNumbers(i, 1);
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printPattern(n);

    return 0;
}
