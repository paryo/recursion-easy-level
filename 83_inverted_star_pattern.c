#include <stdio.h>

void print_starts(int count) {

    if (count == 0) {

        return;
    }

    printf("*");

    print_starts(count-1);
}

void inverted_star_pattern(int current , int n) {

    if (current  < n) {

        return;
    }

    print_starts(current);

    printf("\n");


    inverted_star_pattern(current-1,n);


}

int main() {


    inverted_star_pattern(5,1);


    return 0;
}