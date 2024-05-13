#include<stdio.h>
int main(){
    int side, sqr;
    printf("Enter side of a Square : ");
    scanf("%d", &side);
    sqr = side*side;
    printf("The area of the Square is : %d", sqr);
    return 0;
}