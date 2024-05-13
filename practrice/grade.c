#include<stdio.h>
int main() {
    int marks;
    printf("Enter Your marks : ");
    scanf("%d", &marks);
    if(marks>85 && marks<=100){
        printf("A\n");
    } else if(marks>60 && marks<=85){
        printf("B");
    } else if(marks>40 && marks<=60){
        printf("C");
    } else if(marks>30 && marks<=40){
        printf("D");
    } else if (marks<30 && marks>=0){
        printf("You have Fail");
    } else {
        printf("Enter valid marks");
    }
    return 0;
}