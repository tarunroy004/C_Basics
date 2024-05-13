#include<stdio.h>
int main() {
    int length;
    printf("Enter The length of the Array : ");
    scanf("%d", &length);
    int arr[length], res[length], temp;
    printf("Enter array elements --- \n");
    for(int i=0; i<length; ++i){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<length; i++){
        for(int j=i+1; j<length; ++j){
            if(arr[j]<=arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j]= temp;
            }
        }
    }

    for(int i=0; i<length; ++i){
        printf("%d\n", arr[i]);
    }

    return 0;
}