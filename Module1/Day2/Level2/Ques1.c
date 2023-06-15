#include <stdio.h>

void swapAlternate(int array[], int size) {
    for (int i = 0; i < size - 1; i += 3) {
        int temp = array[i];
        array[i] = array[i + 2];
        array[i + 2] = temp;
    }
}

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

    printf("Array before swapping alternate elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    swapAlternate(array, size);

    printf("Array after swapping alternate elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
