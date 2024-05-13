#include<stdio.h>
int main() {
    int num = 18;
    int *pointer = &num;
    printf("Original Value : %d\n", num);
    printf("Enter a value : ");
    scanf("%d", &(*pointer));
    printf("Modified Value : %d\n", num);
    return 0;
}