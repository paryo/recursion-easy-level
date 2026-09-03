#include <stdio.h>

void print_multiple_of_k(int n) {

    int k = 3;

    if (n == 0) {

        return;
    }

    print_multiple_of_k(n-1);

    printf(" %d ", k*n);


}

int main() {

    int n = 5;

    print_multiple_of_k(n);

    return 0;
}