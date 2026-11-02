#include <stdio.h>

int collatz_Steps(int n) {

    if (n ==1) {

        return 0;
    }

    if (n <= 0) {

        return -1;
    }


    if (n %2 == 0) {

        return 1 + collatz_Steps(n/2);
    }

    else {

        return 1 + collatz_Steps(3*n+1);
    }


}



int main() {

    printf("%d", collatz_Steps(6));

    return 0;
}