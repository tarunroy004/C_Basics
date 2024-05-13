#include<stdio.h>
int main() {
    for(int i = 1; i<=5; i++){
        printf("\n");
        for(int j =1; j<=i; j++){
            printf("* ");
        }
    }

    return 0;
}