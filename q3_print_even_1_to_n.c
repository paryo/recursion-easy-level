#include <stdio.h>

void print_even_1_to_n(int n) {

    if (n == 0) {

        return;
    }

    print_even_1_to_n(n-1);

    if (n %2 == 0) {

        printf(" %d ",n);
    }

}

int main() {

    int n = 10;

    print_even_1_to_n(n);

    return 0;

}