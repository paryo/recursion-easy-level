#include <stdio.h>

int count_set_bits(int n) {

    if (n == 0) {

        return 0;
    }

    return (n & 1) + count_set_bits(n >>1);

}

int main() {

    printf("%d", count_set_bits(6));

    return 0;
}