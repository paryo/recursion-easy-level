#include <stdio.h>

int suffix_sum(int arr[] , int size , int k) {

    if (k == size-1) {

        return arr[size-1];

    }

    return arr[k] + suffix_sum(arr,size,k+1);


}

int main() {

    int arr[] = {3, 1, 4, 2, 5};

    int size = sizeof(arr)/sizeof(arr[0]);

    printf("%d",suffix_sum(arr,size,2));


}