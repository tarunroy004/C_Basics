#include<stdio.h>
int binarySearch(int arr[], int key, int low, int high) {
    int mid = (high+low)/2;
    if (low > high) {
        return -1;
    }
    if (arr[mid] == key) {
        return mid;
    } else if (key > arr[mid]) {
        return binarySearch(arr, key, mid+1, high);
    } else {
        return binarySearch(arr, key, low, mid-1);
    }
}

int main () {
    int arr[] = {10, 20, 40, 86, 45, 53, 58, 14, 36, 67};
    int low = 0, high = 9, key = 45; 
    int res = binarySearch(arr, key, low, high);
    if (res == -1) {
        printf("%d not found.", key);
    } else {
        printf("%d is in %d index.", arr[res], res);
    }
    return 0;
}
