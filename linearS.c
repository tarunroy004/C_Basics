#include<stdio.h>
int linearSearch(int arr[], int size, int key);
int main() {
    int arr[50], n, item;
    printf("Enter the Array size : ");
    scanf("%d", &n);
    printf("Enter Array elements :--\n");
    for(int i=0; i<n; ++i) {
        scanf("%d", &arr[i]);
    }
    printf("Before Experiment the Array :-- \n");
    for(int i=0; i<n; ++i) {
        printf("%d\t", arr[i]);
    }
    printf("\nWhich element you want to SEARCH : ");
    scanf("%d", &item);
    linearSearch(arr, n, item);
    return 0;
}
int linearSearch(int arr[], int size, int key) {
    int flag = 0;
    for (int i=0; i<size; ++i) {
        if(arr[i] == key) {
            printf("%d is in %d Index Number", key, i);
            flag = 1;
        }
    }
    if(flag==0) {
        printf("%d is not Found", key); 
    }
}


