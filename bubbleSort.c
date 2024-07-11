#include<stdio.h>
int bubbleSort(int arr[], int n);
int main() {
    int array[100], n;
    printf("Enter How many element in the Array : ");
    scanf("%d", &n);
    for(int i=0; i<n; ++i) {
        printf("Enter Element in Index Number %d : ", i);
        scanf("%d", &array[i]);
    }
    printf("Before Bubble sort :-- \n");
    for(int i=0; i<n; ++i) {
        printf("%d\t", array[i]);
    }
    bubbleSort(array, n);
    printf("\nAfeter Bubble sort :-- \n");
    for(int i=0; i<n; ++i) {
        printf("%d\t", array[i]);
    }
    return 0;
}
int bubbleSort(int arr[], int n) {
    for(int i=0; i<n; ++i) {
        int temp;
        for(int j=0; j<n-i; ++j) {
            if (arr[j] < arr[j+1]) {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}