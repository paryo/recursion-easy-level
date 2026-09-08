#include <stdio.h>

int  sum_n(int n) {

    if (n == 0) {

        return 0;
    }

    return sum_n(n-1) + n;


}

int main() {

    printf("%d \n" , sum_n(5));

    return 0;
}