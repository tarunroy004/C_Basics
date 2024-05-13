#include<stdio.h>
#include<stdlib.h>
int main () {
    int a;
    float side, base, height, width, radius;

    while (1) {
        printf("1---> Curcle \n");
        printf("2---> Rectangle \n");
        printf("3---> Square \n");
        printf("4---> Tringle \n");
        printf("5---> Exit \n");

        printf("Chose a Number : ");
        scanf("%d", &a);

        switch (a) {
        case 1 :
            printf("Enter a radius : ");
            scanf("%f", &radius);
            printf("Area of the Curcle = %.2f \n", 3.142*radius*radius );
            break;
        case 2 :
            printf("Enter a Height : ");
            scanf("%f", &height);
            printf("Enter a Width : ");
            scanf("%f", &width);
            printf("Area of the Rectangle = %.2f \n", height*width );
            break;
        case 3 :
            printf("Enter a Side : ");
            scanf("%f", &side);
            printf("Area of the Square = %.2f \n", side*side );
            break;
        case 4 :
            printf("Enter a Base : ");
            scanf("%f", &base);
            printf("Enter a Height : ");
            scanf("%f", &height);
            printf("Area of the Tringle = %.2f \n", 0.5*base*height );
            break;
        case 5 :
            exit(0);  
            break;
        default:
        printf("Enter a Currect Input");
            break;
        }
    }
    
    return 0;
}