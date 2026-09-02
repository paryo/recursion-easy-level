#include <stdio.h>

void print_1_to_N(int n) {

    // base case

    if (n == 0) {

        return;
    }

    // head recursion

    print_1_to_N(n-1);
    printf(" %d ", n);



}

int main() {

    int n = 5;

    print_1_to_N(n);

    return 0;


}