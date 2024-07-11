#include<stdio.h>
int insertionSort(int arr[], int n);
int main() {
    int arr[100], n;
    printf("Enter how many element in the Array : ");
    scanf("%d", &n);
    for(int i=0; i<n; ++i) {
        printf("Enter element in Index %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("Before Insertion Sort :--\n");
    for(int i=0; i<n; ++i) {
        printf("%d\t", arr[i]);
    }
    insertionSort(arr, n);   
    printf("\nAfter Insertion Sort :--\n");
    for(int i=0; i<n; ++i) {
        printf("%d\t", arr[i]);
    }
    return 0;
}
int insertionSort(int arr[], int n) {
    for(int i=1; i<n; ++i) {
        int temp = arr[i];
        int j = i-1;
        while(temp <= arr[j] && j>=0) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}