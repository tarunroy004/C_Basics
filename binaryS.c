#include<stdio.h>
int binarySearch(int arr[], int key, int start, int end);
int main () {
    int arr[50], n, start, end, key, res;
    printf("Enter Array size : ");
    scanf("%d", &n);
    start = 0;
    end = n-1;
    printf("Enter Array elements :-- \n");
    for(int i=0; i<n; ++i) {
        scanf("%d", &arr[i]);
    }
    printf("Before Searching the Array :-- \n");
    for(int i=0; i<n; ++i) {
        printf("%d\t", arr[i]);
    }
    printf("\nWhich element You want to SEARCH : ");
    scanf("%d", &key);
    res = binarySearch(arr, key, start, end);
    if (res== -1) {
        printf("%d not Found..", key);
    } else {
        printf("%d is in %d Index number...", key, res);
    }
    return 0;
}
int binarySearch(int arr[], int key, int start, int end) {
    int mid = (start + end) / 2;
    if (start > end) {
        return -1;
    }
    if (arr[mid] == key) {
        return mid;
    } else if (key > arr[mid]) {
        return binarySearch(arr, key, mid+1, end);
    } else {
        return binarySearch(arr, key, start, mid-1);
    }    
}