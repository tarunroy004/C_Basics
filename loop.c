#include<stdio.h>
int main() {
    int a, b = 0, c;
    printf("Enter a Number : ");
    scanf("%d", &a);
    c = a;

    // for (int i = 1; i<=a; i++) {
    //     if (a%i == 0 ) {
    //         b++;
    //     }
    // }
    // if (b == 2 ){
    //     printf("%d is a Prime Number", a);
    // } else {
    //     printf("%d is not a Prime Number", a);
    // }

    while (a!=0){
        b = b + (a%10)*(a%10)*(a%10);
        a = a/10;
    }
    if (b == c ){
        printf("%d is a Amstrong Number", c);
    } else {
        printf("%d is not a Amstrong Number", c);
    }

    return 0;
}