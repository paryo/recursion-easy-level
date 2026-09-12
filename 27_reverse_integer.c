    #include <stdio.h>

    int reverse_integer(int n, int rev) {


        if (n == 0) {

            return rev;
        }

        return reverse_integer(n/10 , rev*10 + (n%10));
    }

    int main() {

        printf("%d", reverse_integer(1234,0));



        return 0;
    }