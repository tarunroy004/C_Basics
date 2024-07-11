#include<stdio.h>
int arr[] = {20, 45, 89, 34, 105, 21, 457, 15, 18, 04};
int insertionSort(int arr[]);
int swap(int arr[], int key, int i);

int main() {
    printf("Before insertion Short : \n");
    for(int i=0; i<10; i++) {
        printf("%d\t", arr[i]);
    }
    insertionSort(arr);
    printf("\nAFter insertion Short : \n");
    for(int i=0; i<10; i++) {
        printf("%d\t", arr[i]);
    }
    return 0;
}

int insertionSort(int arr[]) {
    for (int i=1; i<10; i++) {
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        } 
        arr[j+1] = key;
    }
}
int swap(int arr[], int key, int i) {
    int temp = arr[key];
    arr[key] = arr[i];
    arr[i] = temp;
}

