#include <stdio.h>

void print_down_by_k(int n , int k) {

    if (n <0) {

        return;
    }

    printf(" %d ", n);

    print_down_by_k(n-k,k);


}

int main( ) {

    print_down_by_k(10,3);

    return 0;
}