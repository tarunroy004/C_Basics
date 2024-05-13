#include<stdio.h>
int main(){
    int a, b;
    printf("Enter first Number : ");
    scanf("%d", &a);
    printf("Enter second Number : ");
    scanf("%d", &b);
    printf("Before swaping your Number --- \n");
    printf("a = %d and b = %d \n", a,b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("After swaping your numbers ---\n");
    printf("a = %d and b = %d", a,b);
    return 0;
}