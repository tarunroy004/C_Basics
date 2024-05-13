#include <stdio.h>
#include <math.h>
int main()
{
    long long int num, l, sum = 0, x, m;
    printf("Enter a 16 digit Number : ");
    scanf("%lld", &num);
    printf("Enter length : ");
    scanf("%lld", &l);
    x = num;

    int arr[] = {};
    while (num != 0 )
    {
        int i = -1;
        int j = i + 1;
        arr[j] = num % 10;
        printf("%d\n", arr[i]);
        num = num / 10;
        i =j;
    }


    return 0;
}
