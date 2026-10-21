#include <stdio.h>

int check_power_of_three(int n) {

    if (n<= 0) {

        return 0;
    }

    if (n ==1) {

        return 1;
    }

    if (n%3 != 0) {

        return 0;
    }

    return check_power_of_three(n/3);
}

int main() {

    printf("%d",check_power_of_three(27));

    return 0;
}