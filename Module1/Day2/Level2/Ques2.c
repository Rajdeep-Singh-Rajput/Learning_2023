#include <stdio.h>

int compareBoxes(int box1[], int box2[], int size) {
    int count[size];
    for (int i = 0; i < size; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < size; i++) {
        int found = 0;
        for (int j = 0; j < size; j++) {
            if (box1[i] == box2[j] && count[j] == 0) {
                count[j] = 1;
                found = 1;
                break;
            }
        }
        if (found == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int size;
    printf("Enter the size of the boxes: ");
    scanf("%d", &size);

    int box1[size];
    int box2[size];

    printf("Enter the items of Box 1:\n");
    for (int i = 0; i < size; i++) {
        printf("Item %d: ", i);
        scanf("%d", &box1[i]);
    }

    printf("Enter the items of Box 2:\n");
    for (int i = 0; i < size; i++) {
        printf("Item %d: ", i);
        scanf("%d", &box2[i]);
    }

    int result = compareBoxes(box1, box2, size);

    if (result == 1) {
        printf("Boxes have a one-to-one mapping of items.\n");
    } else {
        printf("Boxes do not have a one-to-one mapping of items.\n");
    }

    return 0;
}
