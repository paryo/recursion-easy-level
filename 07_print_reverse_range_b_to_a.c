#include <stdio.h>

void print_reverse_range_b_to_a(int a , int b) {

    if (b < a) {

        return;
    }

    printf(" %d ",b);

    print_reverse_range_b_to_a(a , b-1);
}

int main() {

    int a = 3;

    int b = 7;

    print_reverse_range_b_to_a(a,b);

    return 0;

}