#include <stdio.h>

int count_digits(int n) {

    if (n < 0) {

        return -n;
    }

    if ( n ==0) {

        return 0;
    }

    return 1 + count_digits(n/10);
}

int main() {

    printf("%d", count_digits(1234));

    return 0;
}