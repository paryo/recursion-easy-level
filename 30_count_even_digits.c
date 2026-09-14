#include <stdio.h>

int count_even_digits(int n) {


    if (n ==0) {

        return 0;
    }

    return ((n%10) %2 == 0) + count_even_digits(n/10);
}

int main () {

    printf("%d", count_even_digits(123456));

    return 0;
}