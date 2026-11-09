#include <stdio.h>

int prime_count = 0;

void prime_numbers(int arr[] , int size , int i) {

    if (i >= size) {

        return;
    }

    int n = arr[i];

    int prime_number = 1;

    if (n <=1) {

        prime_number = 0;
    }

    else {

        for (int j =2 ; j*j <=   n ; j++) {

            if (n % j == 0) {

                prime_number = 0;

                break;
            }


        }
    }

    if (prime_number == 1) {

        prime_count++;
    }


    prime_numbers(arr,size,i+1);





}

int main() {

    int arr[] = {2, 4, 5, 10, 13, 1, 17};

    int size = sizeof(arr)/sizeof(arr[0]);

    prime_numbers(arr,size,0);


    printf("%d", prime_count);


    return 0;
}
