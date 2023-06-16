#include <stdio.h>

int main() {
    int n, i, j, number, digit;
    int smallest, largest;
    int valid; // Flag to check if the number is valid

    printf("Enter the number of test cases: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        smallest = 9; // Initialize smallest to maximum possible digit
        largest = 0;  // Initialize largest to minimum possible digit
        valid = 1;    // Initialize the validity flag to 1 (true)

        // Find smallest and largest digits in the number
        while (number != 0) {
            digit = number % 10;

            if (digit < smallest) {
                smallest = digit;
            }

            if (digit > largest) {
                largest = digit;
            }

            number /= 10;
        }

        if (smallest == largest && smallest != 0) {
            printf("Not Valid\n");
        } else {
            printf("Smallest digit: %d\n", smallest);
            printf("Largest digit: %d\n", largest);
        }
    }

    return 0;
}
