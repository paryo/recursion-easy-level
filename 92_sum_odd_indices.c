#include <stdio.h>

int sum_of_odd(int arr[] , int size , int i) {

    if (i >= size) {

        return 0;
    }

    if (i %2 != 0) {

        return arr[i] + sum_of_odd(arr, size ,i+1);
    }

    else {

        return  0 + sum_of_odd(arr,size,i+1);
    }


}

int main() {

    int arr[] = {10, 20, 30, 40, 50, 60};

    int size = sizeof(arr)/sizeof(arr[0]);

    printf("%d", sum_of_odd(arr,size,0));

    return 0;
}