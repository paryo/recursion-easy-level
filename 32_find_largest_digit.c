#include <stdio.h>

int find_largest_digit(int n) {

    if (n <10) {

        return n;
    }

    int last_digit = n%10;

    int largest_digit = find_largest_digit(n/10);

    return (last_digit > largest_digit) ? last_digit : largest_digit;


}

int main() {

    printf("%d",find_largest_digit(5832));

    return 0;
}