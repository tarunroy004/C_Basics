#include<stdio.h>
int sum(int);
int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    if(a==0){
    printf("Sum of %d Natural Number is %d", a, 0);
    } else{
    printf("Sum of %d Natural Number is %d", a, sum(a));
    }
    return 0;
}
int sum(int a){
    if(a!=0){
        return (a + sum(a-1));
    } else {
        return a;
    }
}
