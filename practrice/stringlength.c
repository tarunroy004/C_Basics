#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    int length= 0;
    printf("Enter your First Name : ");
    gets(str);
    while(str[length] != '\0'){
        length++;
    }

    printf("The Length of your first name : %d", length);

    return 0;
}