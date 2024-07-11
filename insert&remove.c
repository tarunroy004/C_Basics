#include<stdio.h>
int main() {
    int arr[50], n, ind, item;
    printf("\nEnter how many numbers you want in the Array : ");
    scanf("%d", &n);
    printf("\nEnter Array elements :-- \n");
    for(int i=0; i<n; ++i) {
        scanf("%d", &arr[i]);
    }
    printf("\nBefore Experiment, The Array :-- \n");
    for(int i=0; i<n; ++i) {
        printf("%d\t", arr[i]);
    }
    // Insert a element --
    printf("\nEnter which element you want to ADD : ");
    scanf("%d", &item);
    printf("In which Index number : ");
    scanf("%d", &ind);
    for(int i=n-1; i>=ind; --i) {
        arr[i+1] = arr[i];
    }
    arr[ind] = item;
    printf("After Insertion : --\n");
    for(int i=0; i<=n; ++i) {
        printf("%d\t", arr[i]);
    }
    //Remove a element --
    printf("\nNow enter the Index number of which element you want to REMOVE : ");
    scanf("%d", &ind);
    for(int i=ind; i<n; ++i) {
        arr[i] = arr[i+1];
    }
    printf("\nAfter Removing the element the Array : -- \n");
    for(int i=0; i<n; i++) {
        printf("%d\t", arr[i]);
    }
    
    return 0;
}