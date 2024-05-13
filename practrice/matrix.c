#include<stdio.h>
int main(){
    int oneR, oneC, twoR, twoC;
    printf("Enter first matrix Row and Column Number : ");
    scanf("%d%d", &oneR, &oneC);
    printf("Enter Second matrix Row and Column : ");
    scanf("%d%d", &twoR, &twoC);
    int one[oneR][oneC], two[twoR][twoC];
    printf("Enter 1st matrix elements --\n");
    for(int i=0; i<oneR; i++){
        for(int j=0; j<oneC; j++){
            scanf("%d", &one[i][j]);
        }
    }
    printf("Enter 2nd matrix elements --\n");
    for(int i=0; i<twoR; i++){
        for(int j=0; j<twoC; j++){
            scanf("%d", &two[i][j]);
        }
    }
    if (oneC != twoR){
        printf("This multyplication not posiible\n");
    } else {
        printf("Multiplication of those two matrix -- \n");
        int prod[oneR][twoC];
        for(int i=0; i<oneR; i++){
            for(int j=0; j<twoC; j++){
                prod[i][j] = 0;
                for(int k=0; k<twoC; k++){
                prod[i][j] += one[i][k]*two[k][j];
                }
            }
        }

        printf("The Result is \n---\n");
        for(int i=0; i<oneR; i++){
            for(int j=0; j<twoC; j++){
                printf("%d\t", prod[i][j]);
            }
            printf("\n");
        }
    }
    
    return 0;
}