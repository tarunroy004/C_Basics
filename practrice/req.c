#include <stdio.h>
int main() {
    int height, width, rec;
    printf("Enter the hight of a Rectangle : ");
    scanf("%d", &height);
    printf("Enter the width of a Rectangle : ");
    scanf("%d", &width);
    rec = height*width;
    printf("The area of the Rectangle is : %d", rec);
    return 0;
}