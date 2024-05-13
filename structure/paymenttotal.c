#include<stdio.h>
struct workers {
    int id;
    char firstName[20];
    float payment;
};

int main() {
    int s;
    float paid=0;
    printf("Enter how many Worker you did Payment : ");
    scanf("%d", &s);
    struct workers wkr[s];
    
    for(int i=0; i<s; i++){
        wkr[i].id = i + 1;
        printf("\nEnter Worker Details for ID:%d\n", wkr[i].id);
        printf("Enter Worker First Name : ");
        scanf("%20s", &wkr[i].firstName);
        printf("How much payment done : ");
        scanf("%f", &wkr[i].payment);
    }

    printf("--------------------\n");
    printf("\n");

    for(int i=0; i<s; i++){
        paid += wkr[i].payment;
    }
    printf("Total paid to the Workers : %.2f\n", paid);

    return 0;
}