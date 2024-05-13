#include<stdio.h>
int main() {
    char a;
    printf("Enter a Charecter : ");
    scanf("%c", &a);
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='U' || a=='U'){
        printf("%c is a Vowel", a);
    } else {
        printf("%c is not a Vowel", a);
    }
    return 0;
}