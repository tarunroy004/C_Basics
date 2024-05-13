#include<stdio.h>
int main(){
    int a;
    printf("Enter a NUmber : ");
    scanf("%d", &a);
    if(a==0){
        printf("%d is 0\n", a);
    } else if(a<0){
        printf("%d is a Negative number\n", a);
    } else {
        printf("%d is a Positive number\n", a);
    }
    return 0;
}