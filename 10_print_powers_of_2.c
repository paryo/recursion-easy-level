#include <stdio.h>

void print_powers_of_2(int n) {

    if (n < 0) {

        return;
    }

    print_powers_of_2(n-1);

    printf(" %d ", 1 << n);
}


int main() {
    int n = 4;

    print_powers_of_2(n);

    return 0;
}
