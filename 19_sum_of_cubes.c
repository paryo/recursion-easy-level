#include <stdio.h>

int sum_of_cubes(int n) {

    if (n ==0) {

        return 0;
    }

    return sum_of_cubes(n-1) + n*n*n;
}

int main() {

    printf("%d", sum_of_cubes(5));

    return 0;
}