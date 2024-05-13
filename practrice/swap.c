#include<stdio.h>

int swap(int , int);

int main() {
    int a, b;
    printf("Enter two number to swap : ");
    scanf("%d%d", &a, &b);
    swap(a, b);
    return 0;
}

int swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    printf("Here your two swaped Numbers : a = %d, and b = %d", a,b);
}