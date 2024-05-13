#include<stdio.h>
int sum(int a, int b) {
    return a+b;
};
int sub(int a, int b) {
    return a*b;
};
int mul(int a, int b) {
    return a*b;
};
int div(int a, int b) {
    return a/b;
};
int main(){
    int a, b;
    printf("Enter First Amount :- ");
    scanf("%d", &a);
    printf("Enter Second Amount :- ");
    scanf("%d", &b);

    printf("Addition is :- %d\n", sum(a,b));
    char ab;
    printf("Do you want Substraction :- ");
    scanf("%s", &ab);
    if(ab = 'yes'){
       printf("Subtraction is :- %d\n", sub(a,b));
    }
    return 0;
}