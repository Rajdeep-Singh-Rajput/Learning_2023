#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i);
        scanf("%d", &array[i]);
    }

    int sum = 0;
    for (int i = 0; i < size; i += 2) {
        sum += array[i];
    }

    printf("Sum of every alternate element starting from element 0: %d\n", sum);

    return 0;
}
