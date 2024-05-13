#include<stdio.h>
int main() {
    int a, b, c;
    printf("Enter three numberas : ");
    scanf("%d%d%d", &a, &b, &c);
    if(a>b && a>c){
        printf("%d is greater than %d and %d", a, b,c);
    } else if (b>a && b>c){
        printf("%d is greater than %d and %d", b, a, c);
    } else {
        printf("%d is greater than %d and %d", c, a, b);
    }
    return 0;
}