#include <stdio.h>

int count_digit(int n) {

    if (n == 0) {

        return 0;
    }

    return 1 + count_digit(n/10);
}

int power(int base , int exp) {

    if (exp == 0) {

        return 1;
    }

    return base * power(base,exp-1);
}

int armstrong_engine(int n , int digit_count) {

    if (n == 0) {

        return 0;
    }

    int last_digit = n%10;

    return power(last_digit,digit_count) + armstrong_engine(n/10,digit_count);

}




int main() {

    int n = 153;

    printf("%d", armstrong_engine(n,3));


    return 0;
}