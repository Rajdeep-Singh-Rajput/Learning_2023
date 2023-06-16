#include <stdio.h>

int find_largest_number(int num) {
    int largest_num = -1;
    
    for (int i = 0; i < 4; i++) {
        int new_num = 0;
        int multiplier = 1;
        int divisor = 1000;
        
        for (int j = 0; j < 4; j++) {
            if (j != i) {
                int digit = (num / divisor) % 10;
                new_num = new_num * 10 + digit;
            }
            divisor /= 10;
        }
        
        if (new_num > largest_num) {
            largest_num = new_num;
        }
    }
    
    return largest_num;
}

int main() {
    int number;
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);
    
    int largest = find_largest_number(number);
    printf("The largest number by deleting a single digit from %d is: %d\n", number, largest);
    
    return 0;
}
