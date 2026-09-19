#include <stdio.h>

int product_array(int arr[] , int size) {

    if (size == 0) {

        return 1;
    }

    return  arr[0] * product_array(arr+1,size-1);
}

int main() {

    int arr[] = {2,3,4,5};

    int size = 4;

    printf("%d", product_array(arr,size));

    return 0;
}