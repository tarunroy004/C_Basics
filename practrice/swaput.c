#include<stdio.h>
int main() {
    int a, b, temp;
    printf("Enter first Number : ");
    scanf("%d", &a);
    printf("Enter second Number : ");
    scanf("%d", &b);
    printf("Before swaping your Number --- \n");
    printf("a = %d and b = %d \n", a,b);
    temp = a;
    a = b;
    b = temp;
    printf("After swaping your numbers ---\n");
    printf("a = %d and b = %d", a,b);
    return 0;
}