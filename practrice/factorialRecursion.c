#include<stdio.h>
int fac(int);
int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    if(a==0){
    printf("Factorial of %d is %d", a, 0);
    } else{
    printf("Factorial of %d is %d", a, fac(a));
    }
    return 0;
}
int fac(int a){
    if(a!=0){
        return a * fac(a-1);
    } else {
        return 1;
    }
}
