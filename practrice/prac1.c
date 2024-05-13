#include <stdio.h>

// Function to reverse a number
int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

int main() {
    // Input: Get an integer from the user
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the number is positive
    if (num > 0) {
        // Output: Print the reverse of the positive number
        int reversedNum = reverseNumber(num);
        printf("The reverse of %d is: %d\n", num, reversedNum);
    } else if (num == 0) {
        // Output: Special case for zero
        printf("Zero is neither positive nor negative.\n");
    } else {
        // Output: Print a message if the number is not positive
        printf("The entered number is not positive.\n");
    }

    return 0;
}
