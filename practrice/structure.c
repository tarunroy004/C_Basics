#include<stdio.h>
struct std{
    int roll;
    char firstname[20];
    float marks;
};

int main (){
    int s;
    printf("Enter how student : ");
    scanf("%d", &s);
    struct std student[s];
    for(int i=0; i<s; i++){
        printf("Enter student's Roll Number : ");
        scanf("%d", &student[i].roll);
        printf("Enter student's first name : ");
        scanf("%20s", &student[i].firstname);
        printf("Enter student's marks : ");
        scanf("%f", &student[i].marks);
        printf("\n");
    }

    printf("Displaying The structure ---- \n");
    for(int i=0; i<s; i++){
        printf("\n");
        printf("Roll : %d\n", student[i].roll);
        printf("First name : %s\n", student[i].firstname);
        printf("marks : %f\n", student[i].marks);
    }
    
    return 0;
}