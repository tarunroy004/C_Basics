#include<stdio.h>
int main () {
    double a, b;
    char c;
    printf("Enter first Numbers : ");
    scanf("%lf", &a);
    printf("What you want(+, -, *, /) : ");
    scanf("%s", &c);
    printf("Enter second Numbers : ");
    scanf("%lf", &b);
    switch (c){
    case '+':
        printf("Addition : %lf", a+b);
        break;
    case '-':
        printf("Subtraction : %lf", a-b);
        break;
    case '*':
        printf("Multilication : %lf", a*b);
        break;
    case '/':
        printf("Division : %lf", a/b);
        break;
    default:
    printf("Enter valid inputs");
        break;
    }
    return 0;
}