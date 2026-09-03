#include <stdio.h>

void print_squares(int n) {

    if (n == 0) {

        return;
    }

    print_squares(n-1);

    printf(" %d ",n*n);
}


int main() {

    int n =5;

    print_squares(n);

    return 0;
}