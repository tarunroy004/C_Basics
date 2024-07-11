#include<stdio.h>
#define SIZE 100
int arr[] = {20, 45, 89, 34, 105, 21, 457, 15, 18, 04};
void merge(int arr[], int low, int mid, int high);
void mergeSort(int arr[], int low, int high);
void printArr(int arr[], int n);

int main() {
    int low = 0, high = 9;
    printf("Before Merge Short : \n");
    printArr(arr,high);
    mergeSort(arr, low, high);
    printf("\nAFter Merge Short : \n");
    printArr(arr,high);
    return 0;
}

void printArr(int arr[], int n) {
    for(int i=0; i<=n; i++) {
        printf("%d\t", arr[i]);
    }
}

void merge(int arr[], int beg, int mid, int end) {
    int i = beg, j = mid+1, ind = beg, temp[SIZE];
    while((i<=mid) && (j<=end)) {
        if(arr[i] < arr[j]) {
            temp[ind] = arr[i];
            i++;
        } else {
            temp[ind] = arr[j];
            j++;
        }
        ind++;
    }
    if(i>mid) {
        while(j<=end){
            temp[ind] = arr[j];
            j++; ind++;
        }
    } else {
        while(i<=mid) {
            temp[ind] = arr[i];
            i++; ind++;
        }
    }
    for(int k=0; k<ind; ++k) {
        arr[k] = temp[k];
    }
}

void mergeSort(int arr[], int low, int high) {
    int mid;
    if (low < high) {
        mid = (low + high)/2;
        mergeSort(arr, low, mid); 
        mergeSort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
}