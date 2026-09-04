#include <stdio.h>

void print_both_ways(int current , int n) {

    if (current == n) {

        printf(" %d ",n);

        return;
    }

    printf(" %d ", current);

    print_both_ways(current+1 , n);

    printf(" %d ", current);
}

int main() {

    print_both_ways(1,4);

    return 0;
}