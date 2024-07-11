#include<stdio.h>
int arr[] = {20, 45, 89, 34, 105, 21, 457, 15, 18, 04};
int selectionSort(int arr[]);
int swap(int arr[], int key, int i);

int main() {
    printf("Before Selection Short : \n");
    for(int i=0; i<10; i++) {
        printf("%d\t", arr[i]);
    }
    selectionSort(arr);
    printf("\nAFter Selection Short : \n");
    for(int i=0; i<10; i++) {
        printf("%d\t", arr[i]);
    }
    return 0;
}

int selectionSort(int arr[]) {
    for(int j=0; j<10; j++) {
        int key = j;
        for(int i=key+1; i<10; i++) {
            if(arr[key] > arr[i]) {
                key = i;
            }
        }
        if (key != j) {
            swap(arr, key, j);
        }
    }
}
int swap(int arr[], int key, int i) {
    int temp = arr[key];
    arr[key] = arr[i];
    arr[i] = temp;
}

