#include <stdio.h>

int count_zeros(int n) {


    if (n == 0) {

        return 0;
    }

    return (n%10 == 0) + count_zeros(n/10);
}

int main() {

    printf("%d", count_zeros(102040));

    return 0;
}