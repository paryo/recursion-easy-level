#include <stdio.h>

void print_N_to_1(int n) {

    // base case

    if (n == 0) {

        return;
    }

    // head recursion

    print_N_to_1(n-1);
    printf(" %d ", n);



}

int main() {

    int n = 5;

    print_N_to_1(n);



    return 0;


}