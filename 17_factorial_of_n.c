#include <stdio.h>

int factorial_of_n(int n) {

    if (n == 0) {

        return 1;
    }

    return factorial_of_n(n-1) * n;

}

int main() {

    printf("%d",factorial_of_n(5));


    return 0;
}