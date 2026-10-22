#include <stdio.h>

int check_power_of_four(int n) {

    if (n <= 0) {

        return 0;
    }

    if (n == 1) {

        return 1;
    }

    if (n%4 !=0) {

        return 0;
    }

    return check_power_of_four(n/4);
}

int main () {

    printf("%d", check_power_of_four(64));

    return 0;
}