#include <stdio.h>

double geometric_sum(int n) {

    if (n == 0) {

        return 1.0;
    }


    if (n < 0) {

        return 0.0;
    }

    return (1.0/(1<<n)) +
        geometric_sum(n-1);
}

int main() {

    printf("%lf",geometric_sum(3));

    return 0;
}