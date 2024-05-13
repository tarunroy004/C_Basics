#include<stdio.h>
int add(int, int);
int main() {
    int a, b; 
    printf("Enter two numbers : ");
    scanf("%d%d", &a, &b);
    printf("Total of %d and %d is %d", a, b, add(a, b));
    return 0;
}
add(int a, int b){
    return (a+b);
}