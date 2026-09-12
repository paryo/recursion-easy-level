#include <stdio.h>

int reverse_integer(int n , int reverse) {

    if (n == 0) {

        return reverse;
    }

    return reverse_integer(n/10 , reverse*10 + (n%10));
}

int check_palindrome(int n) {

    if (n <0) {

        return 0;
    }

    return n == reverse_integer(n,0);


}


int main() {

    int n = 1221;
    printf("Input: %d | Is Palindrome: %d\n", n, check_palindrome(n));
    return 0;


}