#include<stdio.h>
int arr[] = {20, 45, 89, 34, 105, 21, 457, 15, 18, 04};
int quickSort(int arr[], int low, int high);
int pertition(int arr[], int low, int high);
int swap(int arr[], int key, int i);

int main() {
    printf("Before insertion Short : \n");
    int low = 0, high = 9;
    for(int i=0; i<10; i++) {
        printf("%d\t", arr[i]);
    }
    quickSort(arr, low, high);
    printf("\nAFter insertion Short : \n");
    for(int i=0; i<10; i++) {
        printf("%d\t", arr[i]);
    }
    return 0;
}

int quickSort(int arr[], int low, int high) {
    if (low<high) {
        int pivotInd = pertition(arr, low, high);
        quickSort(arr, low, pivotInd-1);
        quickSort(arr, pivotInd+1, high);
    }
}
int pertition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low+1, j = high;
    do{
        while(arr[i] <= pivot) {
            i++;
        }
        while(arr[j] > pivot) {
            j--;
        }
        if (i<j) {
            swap(arr, i, j);
        }
    } while(i<j);
    swap(arr, low, j);
    return j;
}
int swap(int arr[], int low, int j) {
    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
}

