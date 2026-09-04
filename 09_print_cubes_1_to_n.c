#include <stdio.h>

void print_cubes(int n) {

    if (n == 0) {

        return;
    }

    print_cubes(n-1);

    printf(" %d ", n*n*n);

}


int main() {

    int n = 4;

    print_cubes(n);

    return 0;
}