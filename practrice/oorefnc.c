#include<stdio.h>
int check(int);
int main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    check(num);
    return 0;
}
int check(int a){
    if (a%2==0){
        printf("%d is a Even NUmber.", a);
    } else {
        printf("%d is a Odd NUmber.", a);
    }
}