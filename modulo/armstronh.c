#include <stdio.h>
#include <math.h>
int main() {
    long long int num, sum = 0, x, m;
    printf("Enter a 16 digit Number : ");
    scanf("%lld", &num);
    x = num;
    while (num != 0)
    {
        m = num % 10;
        sum += (pow(m, 16));
        num = num / 10;
    }
    if (sum == x){
        printf("am");
    }else{
        printf("not");
    }

    return 0;
}

