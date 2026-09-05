#include <stdio.h>

void  print_Alternating(int n , int current) {

    if (current > n) {

        return;
    }


    printf(" %d ", current);

    print_Alternating(n , current+2);

}

int main() {

    print_Alternating(5,1);

    return 0;

}