#include <iso646.h>
#include <stdio.h>


void print_table(int n, int multiplier) {

    if (multiplier > 10) {

        return;
    }

    printf( " %d " , n*multiplier);

    print_table(n,multiplier+1);



}

int main() {

    print_table(5,1);


    return 0;
}