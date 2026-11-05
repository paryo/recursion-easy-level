#include <stdio.h>

int sum_proper_divisors(int n , int i) {

    if (i == 0) {

        return 0;
    }

    if (n %i == 0) {

        return i + sum_proper_divisors(n ,i-1);
    }
    else {

        return 0 + sum_proper_divisors(n , i-1);
    }


}

int perfect_num(int n) {

    if ( n <= 1) {

        return 0;
    }

    int total_sum = sum_proper_divisors(n-1,n);

    if (total_sum == n) {

        return 1;
    }

    else {

        return 0;
    }



}



int main() {

    printf("%d", perfect_num(6));


    return 0;
}