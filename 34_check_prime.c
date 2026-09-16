#include <stdio.h>

int is_prime_helper(int n , int d) {


    if (d*d > n) {

        return 1;
    }

    if (n%d == 0) {

        return 0;
    }

    return is_prime_helper(n,d+1);
}


int is_prime(int n) {

    if (n <=1) {

        return 0;


    }

    return is_prime_helper(n, 2);

}

int main() {

    int n = 37;

    printf("Input: %d | Is Prime: %d\n", n, is_prime(n));

    return 0;
}

