#include <stdio.h>

void print_stars(int n) {

    if (n == 0) {

        return;

    }

    printf("*");

    print_stars(n-1);
}

void print_ascending_pattern (int current , int n) {

    if (current > n) {

        return;
    }



   print_stars(current);

    printf("\n");

    print_ascending_pattern(current+1,n);


}

int main() {

   print_ascending_pattern(1,5);


    return 0;
}