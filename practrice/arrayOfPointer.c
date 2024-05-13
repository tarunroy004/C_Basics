#include<stdio.h>
int main(){
    int* arrayOfPointer[3];
    int a=1, b=2, c=3;
    arrayOfPointer[0]=&a;
    arrayOfPointer[1]=&b;
    arrayOfPointer[2]=&c;

    for(int i=0; i<3; ++i){
        printf("Value of index %d : %d\n", i, *(arrayOfPointer[i]));
    }
    return 0;
}