#include <stdio.h>

int product_of_digits(int n) {

    if (n ==0) {

        return 1;
    }

    return (n%10) * product_of_digits(n/10);
}

int main() {

    printf("%d", product_of_digits(1234));

    return 0;
}