#include <stdio.h>

void print_range(int a , int b) {

    if (a >b) {

        return;
    }

    printf(" %d ", a);

    print_range(a+1,b);


}

int main() {

    int a = 3;

    int b = 7;

    print_range(a,b);

    return 0;
}