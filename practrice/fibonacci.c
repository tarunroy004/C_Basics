#include<stdio.h>
int main() {
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    int a=0, b=1, c;
    while(a<=n){
        printf("%d\n", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}