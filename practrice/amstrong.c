#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, numDigits = 0, sum = 0;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num; // Save the original number

    // Count the number of digits in the number
    while (num != 0) {
        num /= 10;
        numDigits++;
    }

    num = originalNum; // Reset num to the original value

    // Calculate the sum of digits each raised to the power of numDigits
    while (num != 0) {
        int digit = num % 10, a = 1;
        for(int i=0; i<numDigits; i++){
            a = a*digit;
        }
        sum+=a;
        num /= 10;
    }

    // Check and display the result
    if (sum == originalNum)
        printf("%d is an Armstrong number.\n", sum);
    else
        printf("%d is not an Armstrong number.\n", sum);

    return 0;
}
