#include<stdio.h>
struct students {
    char name;
    int roll;
    float marks;
};
int main() {
    struct students sumit;
    struct students chotan;
    int p;
    printf("Enter How many profiles you want : ");
    scanf("%d", &p);
    printf("Now Enter students details : \n");
    for(int i=0; i<p; i++){
        printf("Enter student name : ");
        scanf("%50s", &sumit.name);
        printf("Enter student Roll No. : ");
        scanf("%d", &sumit.roll);
        printf("Enter student Total Marks : ");
        scanf("%50s", &sumit.marks);
    }

    return 0;
}