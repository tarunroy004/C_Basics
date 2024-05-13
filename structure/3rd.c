#include<stdio.h>
struct students {
    char firstName[20];
    int roll;
    float marks;
};
int main() {
    int s;
    printf("Enter how many students you want : ");
    scanf("%d", &s);
    struct students std[s];
    
    for(int i=0; i<s; i++){
        printf("Enter student Name : ");
        scanf("%20s", &std[i].firstName);
        printf("Enter student Roll number : ");
        scanf("%d", &std[i].roll);
        printf("Enter student Marks : ");
        scanf("%f", &std[i].marks);
    }

    printf("Displaing all students\n");
    for(int i=0; i<s; i++) {
        printf("\nRoll number: %d\n", std[i].roll);
        printf("First name:");
        puts(std[i].firstName);
        printf("Marks: %.1f", std[i].marks);
        printf("\n");
    }

    return 0;
}