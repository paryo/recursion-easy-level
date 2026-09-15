#include <stdio.h>

int find_smallest(int n) {

    if (n <10) {

        return n;
    }

    int last_digit = n%10;

    int smallest_digit = find_smallest(n/10);



    return (last_digit < smallest_digit) ? last_digit : smallest_digit;
}

int main() {

    printf("%d", find_smallest(5832));

    return 0;
}