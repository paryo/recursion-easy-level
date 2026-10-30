#include <stdio.h>

double harmonic_sum(int n) {

    if (n == 1) {

        return 1.0;
    }


    if (n <=0) {

        return 0.0;
    }

     return (1.0/n) + harmonic_sum(n-1);



}

int main() {

    printf("%lf", harmonic_sum(3));


    return 0;

}