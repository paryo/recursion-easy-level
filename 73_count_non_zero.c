#include <stdio.h>

int count_non_zero(int arr[] , int size , int idx) {

    if (idx == size) {

        return 0;

    }

    if (arr[idx] != 0) {

        return 1+ count_non_zero(arr,size,idx+1);
    }
    else

        return 0 + count_non_zero(arr,size,idx+1);
}

int main() {

    int arr[] = {0, 5, 0, 12, -3, 0};

    int size = sizeof(arr)/sizeof(arr[0]);

    printf("%d", count_non_zero(arr,size,0));

    return 0;
}