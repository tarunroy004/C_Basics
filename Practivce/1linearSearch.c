#include<stdio.h>
int linearSearch(int arr[], int key) {
    for(int i=0; i<sizeof(arr); i++) {
        if (key == arr[i]) {
            return i;
        }
    }
    return -1;
}
int main () {
    int arr[] = {10, 20, 40, 86, 45, 53};
    int key = 50; 
    int res = linearSearch(arr, key);
    if (res != -1) {
        printf("%d is in %d index.", arr[res], res);
    } else {
        printf("%d not found.", key);
    }
    return 0;
}