#include<stdio.h>
int main(){
    int a, b=0;
    printf("Enter a Number : ");
    scanf("%d", &a);
    for(int i=1; i<=a; i++){
        if(a%i==0){
            ++b;
        }
    }
    if(b==2){
        printf("%d is a Prime Number.",a);
    } else {
        printf("%d is not a Prime Number.", a);
    }

    return 0;
}