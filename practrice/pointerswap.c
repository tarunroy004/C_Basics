#include<stdio.h>
int swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a, b;
    printf("Enter two number : ");
    scanf("%d%d", &a, &b);
    printf("Before swaping your number is a = %d, b = %d\n", a,b);
    swap(&a, &b);
    printf("After swaping your number is a = %d, b = %d\n", a,b);
    return 0;
}