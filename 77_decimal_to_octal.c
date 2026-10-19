#include <stdio.h>

void decimal_to_octal(int n) {

    if (n == 0) {

        return;
    }

    decimal_to_octal(n/8);

    printf("%d", n%8);
}

int main () {

    decimal_to_octal(83);

    return 0;
}