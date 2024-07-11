#include<stdio.h>
int partition(int arr[], int low, int high);
int quickSort(int arr[], int low, int high);
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
    quickSort(arr, 0, n-1);
    printf("\nAfter Insertion Sort :--\n");
    for(int i=0; i<n; ++i) {
        printf("%d\t", arr[i]);
    }
    return 0;
}
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for(int j=low; j<high; ++j) {
        if(arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    i++;
    int temp = arr[i];
    arr[i] = pivot;
    arr[high] = temp;
    return i;
}
int quickSort(int arr[], int low, int high) {
    if(low<high) {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex-1);
        quickSort(arr, pivotIndex+1, high);
    }
}