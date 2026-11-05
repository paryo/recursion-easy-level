#include <stdio.h>

int count_divisors(int i , int n) {

    if (i == 0) {

        return 0;

    }

    if (n % i == 0) {

        return 1 + count_divisors(i-1,n);
    }

    else {

        return 0 +count_divisors(i-1,n);
    }




}

int main() {

    printf("%d",count_divisors(12,12));


    return 0;
}