#include <stdio.h>

int sum_of_squares(int n) {

    if (n == 0) {

        return 0;
    }

    return sum_of_squares(n-1) + (n*n);
}

int main () {

    printf("%d" ,sum_of_squares(5));


    return 0;
}