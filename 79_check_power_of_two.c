#include <stdio.h>

int is_power_of_two(int n) {
    if (n <= 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    if (n % 2 != 0) {

        return 0;
    }


    return is_power_of_two(n/2);



}

int main() {

    printf("%d", is_power_of_two(8));

    return 0;
}
