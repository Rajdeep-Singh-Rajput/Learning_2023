#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAMES 7
#define MAX_LENGTH 100

int compareNames(const void *name1, const void *name2) {
    return strcmp(*(const char **)name1, *(const char **)name2);
}

int main() {
    char *names[MAX_NAMES];
    int numNames;

    printf("Enter the number of names (up to %d): ", MAX_NAMES);
    scanf("%d", &numNames);

    if (numNames > MAX_NAMES) {
        printf("Number of names exceeds the limit.\n");
        return 1;
    }

    printf("Enter the names:\n");
    for (int i = 0; i < numNames; i++) {
        char buffer[MAX_LENGTH];
        printf("Name %d: ", i + 1);
        scanf("%s", buffer);

        names[i] = malloc((strlen(buffer) + 1) * sizeof(char));
        strcpy(names[i], buffer);
    }

    printf("Names before sorting:\n");
    for (int i = 0; i < numNames; i++) {
        printf("%s\n", names[i]);
    }

    qsort(names, numNames, sizeof(char *), compareNames);

    printf("\nNames after sorting:\n");
    for (int i = 0; i < numNames; i++) {
        printf("%s\n", names[i]);
    }

    for (int i = 0; i < numNames; i++) {
        free(names[i]);
    }

    return 0;
}
