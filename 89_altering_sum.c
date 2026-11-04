#include <stdio.h>

int altering_number(int n) {

    if (n == 0) {

        return 0;

    }

    if (n %2 == 0) {

        return -n + altering_number(n-1);
    }

    else {

        return n + altering_number(n-1);
    }
}

int main() {

    printf("%d",altering_number(5));


    return 0;
}