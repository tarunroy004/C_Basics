#include<stdio.h>
int main() {
    double radius, height, width,  side, base;
    int a;
    while (1){
        printf("1) Circle\n");
        printf("2) Rectangle\n");
        printf("3) Square\n");
        printf("4) Tringle\n");
        printf("5) Exit\n");
        printf("Enter What you want : ");
        scanf("%d", &a);

        switch (a){
            case 1:
                printf("Enter radius : ");
                scanf("%lf", &radius);
                printf("The area of The Circle : %lf\n", 3.14159*radius*radius);
                break;
            case 2:
                printf("Enter Height : ");
                scanf("%lf", &height);
                printf("Enter width : ");
                scanf("%lf", &width);
                printf("The area of The Rectangle : %lf\n", height*width);
                break;
            case 3:
                printf("Enter side : ");
                scanf("%lf", &side);
                printf("The area of The Square : %lf\n", side*side);
                break;
            case 4:
                printf("Enter Height : ");
                scanf("%lf", &height);
                printf("Enter Base : ");
                scanf("%lf", &base);
                printf("The area of the Tringle : %lf\n", 0.5*base*height);
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("Enter valid Input...");
                break;
        }
    }
    

    return 0;
}