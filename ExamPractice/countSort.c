#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int arr[] = {20, 45, 89, 34, 105, 21, 457, 15, 18, 04};
int countSort(int arr[], int n);
int maximum(int arr[], int n);
void printArr(int arr[], int n);

int main() {
    printf("Before Merge Short : \n");
    printArr(arr, SIZE);
    countSort(arr, SIZE);
    printf("\nAFter Merge Short : \n");
    printArr(arr, SIZE);
    return 0;
}

void printArr(int arr[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d\t", arr[i]);
    }
}

int countSort(int arr[], int n) {
    int max = maximum(arr, n);
    int* temp = (int *)malloc((max)*sizeof(int));
    int arr2[n];
    for(int i=0; i<n; ++i) {
        temp[arr[i]] = 0;
    }
    for(int i=0; i<n; ++i) {
        temp[arr[i]]++;
    }
    int i = 0;
    int j = 0;
    while (temp[i]!=0) {
        arr2[j] = i;
        j++;
        temp[i]--;
        if(temp[i]==0)
            i++;
    }
    for(int i=0; i<n; ++i) {
        arr[i] = arr2[i];
    }
}

int maximum(int arr[], int n) {
    int max = 0;
    for(int i=0; i<n; ++i) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max+1;
}

