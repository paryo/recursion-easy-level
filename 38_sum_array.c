#include <stdio.h>

int sum_array(int arr[] , int size) {

    if (size == 0) {

        return 0;
    }

    return arr[0] + sum_array(arr+1,size-1);
}

int main() {

    int arr[] = {10,20,30,40,50};

    int size = 5;

    printf("%d", sum_array(arr,size));

    return 0;
}