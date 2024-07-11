#include<stdio.h>
int arr[] = {20, 45, 89, 34, 105, 21, 457, 15, 18, 04};
int bubbleShort(int arr[]) {
    for(int j=0; j<10; j++) {
        for(int i=0; i<10-1; i++) {
            if(arr[i] > arr[i+1]) {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
}
int main() {
    printf("Before Bubble Short : \n");
    for(int i=0; i<10; i++) {
        printf("%d\t", arr[i]);
    }
    bubbleShort(arr);
    printf("\nAFter Bubble Short : \n");
    for(int i=0; i<10; i++) {
        printf("%d\t", arr[i]);
    }
    return 0;
}
