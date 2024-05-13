#include<stdio.h>
int prime(int);
int main(){
    int a;
    printf("Enter a Number : ");
    scanf("%d", &a);
    prime(a);
    return 0;
}
int prime(int a){
    int b=0;
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

}