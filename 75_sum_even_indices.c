#include <stdio.h>

int sum_even_indices(int arr[] , int size , int idx) {

    if (idx >= size) {

        return 0;
    }

    if (idx %2 == 0) {

        return arr[idx] + sum_even_indices(arr,size,idx+1);
    }

    else {

        return 0 + sum_even_indices(arr,size,idx+1);
    }
}

int main() {

    int arr[] = {10, 20, 30, 40, 50};

    int size = sizeof(arr)/sizeof(arr[0]);

    printf("%d",sum_even_indices(arr,size,0));

    return 0;
}