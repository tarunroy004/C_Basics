#include<stdio.h>
int main() {
    int a;
    printf("Enter a Number : ");
    scanf("%d", &a);
    if(a%2==0 && a%3==0){
        printf("%d is devisible by 2 and 3", a);
    } else{
        printf("%d is not devisible by 2 and 3", a);
    }
    return 0;
}