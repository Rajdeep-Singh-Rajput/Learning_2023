#include <stdio.h>

void swap(void* a, void* b, size_t size) {
    unsigned char* p = (unsigned char*)a;
    unsigned char* q = (unsigned char*)b;

    for (size_t i = 0; i < size; i++) {
        unsigned char temp = p[i];
        p[i] = q[i];
        q[i] = temp;
    }
}

int main() {
    int num1, num2;
    printf("Enter two integer values: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2, sizeof(int));
    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

    double d1, d2;
    printf("Enter two double values: ");
    scanf("%lf %lf", &d1, &d2);

    printf("Before swap: d1 = %lf, d2 = %lf\n", d1, d2);
    swap(&d1, &d2, sizeof(double));
    printf("After swap: d1 = %lf, d2 = %lf\n", d1, d2);

    char c1, c2;
    printf("Enter two characters: ");
    scanf(" %c %c", &c1, &c2);

    printf("Before swap: c1 = %c, c2 = %c\n", c1, c2);
    swap(&c1, &c2, sizeof(char));
    printf("After swap: c1 = %c, c2 = %c\n", c1, c2);

    return 0;
}
