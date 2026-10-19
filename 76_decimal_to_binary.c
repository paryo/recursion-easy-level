#include <stdio.h>

void decimal_to_binary(int n) {

    if (n == 0) {

        return;
    }

    decimal_to_binary(n/2);

    printf("%d", n %2);
}

int main() {

    decimal_to_binary(13);


    return 0;
}