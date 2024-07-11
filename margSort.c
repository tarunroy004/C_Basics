#include<stdio.h>
#define SIZE 100

void marge(int arr[], int beg, int mid, int end);
void margeSort(int arr[], int beg, int end);

int main() {
    int arr[SIZE], n;
    printf("Enter the number of elements in the Array : ");
    scanf("%d", &n);
    printf("Enter the element of the Array :-- \n");
    for(int i=0; i<n; ++i) {
        scanf("%d", &arr[i]);
    }
    printf("Before Marge Sort :-- \n");
    for(int i=0; i<n; ++i) {
        printf("%d\t", arr[i]);
    }
    margeSort(arr, 0, n-1);
    printf("\nAfter Marge Sort :-- \n");
    for(int i=0; i<n; ++i) {
        printf("%d\t", arr[i]);
    }
    return 0;
}

void margeSort(int arr[], int beg, int end) {
    if(beg < end) {
        int mid = (beg + end)/2;
        margeSort(arr, beg, mid);
        margeSort(arr, mid+1, end);
        marge(arr, beg, mid, end);
    }
}

void marge(int arr[], int beg, int mid, int end) {
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