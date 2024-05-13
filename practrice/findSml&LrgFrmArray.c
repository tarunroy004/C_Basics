#include<stdio.h>
int arrayFind(int);

int main(){
    int size;
    printf("Enter the size of your Array : ");
    scanf("%d", &size);
    int arr[size];
    Printf("Enter Array items ----\n");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    Printf("Array items ----\n");
    for(int i=0; i<size; i++){
        printf("%d", &arr[i]);
    }

    return 0;
}