#include <stdio.h>

int sum_of_digits(int n) {

    if (n ==0) {

        return 0;
    }

    return  (n%10) + sum_of_digits(n/10);
}

int digit_root(int n) {

    if (n <0) {

        return -n;
    }

    int sum = sum_of_digits(n);

    if (sum <10) {

        return sum;
    }

    return digit_root(sum);

}

int main() {

    printf("%d",digit_root(9875));

    return 0;
}