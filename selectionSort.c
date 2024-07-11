#include<stdio.h>
int swap(int arr[], int key, int pos);
int selectionSort(int arr[], int n);
int main() {
    int arr[100], n, key;
    printf("Enter how many elements in the Array : ");
    scanf("%d", &n);
    for(int i=0; i<n; ++i) {
        printf("Enter Element in Index Number %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("Before Selection Sort the Array :--\n");
    for(int i=0; i<n; ++i) {
        printf("%d\t", arr[i]);
    }
    selectionSort(arr, n);
    printf("\nAfetr Selection Sort the Array :--\n");
    for(int i=0; i<n; ++i) {
        printf("%d\t", arr[i]);
    }
    return 0;
}
int selectionSort(int arr[], int n) {
    for(int i=0; i<n-1; ++i) {
        int key = i;
        for(int j=i+1; j<n; ++j) {
            if(arr[key] > arr[j]) {
                key = j;
            }
        }
        if(key!=i) {
            swap(arr, key, i);
        }
    }
}
int swap(int arr[], int key, int pos) {
    int temp = arr[pos];
    arr[pos] = arr[key];
    arr[key] = temp;
}
