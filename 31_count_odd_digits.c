#include <stdio.h>

int count_odd_digits(int n) {

    if (n ==0) {

        return 0;
    }

    return ((n%10) %2!=0) + count_odd_digits(n/10);
}

int main() {

    printf("%d", count_odd_digits(123456));


    return 0;
}