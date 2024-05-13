#include<stdio.h>
int main() {
    int a;
    printf("Enter a Year : ");
    scanf("%d", &a);
    if(a%4==0 && a%100!=0 || a%400==0){
        printf("%d is a Leap Year\n", a);
    } else {
        printf("%d is not a Leap Year \n", a);
    }
    return 0;
}