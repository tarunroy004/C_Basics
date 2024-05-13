#include<stdio.h>
int main() {
    int num1, num2, result1, result2;
    printf("Enter First Number : ");
    scanf("%d", &num1);
    printf("Enter Second Number : ");
    scanf("%d", &num2);

    result1 = num1 % num2;
    result2 = num1/num2;

    printf("Modulo = %d\n", result1);
    printf("Division = %d\n", result2);


    return 0;
}