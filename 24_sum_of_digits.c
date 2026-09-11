#include <stdio.h>

int sum_of_digits(int n) {

    if (n == 0) {

        return 0;
    }

    return (n%10) + sum_of_digits(n/10);


}

int main() {

    printf("%d", sum_of_digits(1234));

    return 0;
}