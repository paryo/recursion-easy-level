#include <stdio.h>

int strict_decrease(int arr[] , int size , int idx) {

    if (idx == size) {

        return 1;
    }

    if (arr[idx] >= arr[idx-1]) {

        return 0;
    }

    else {

        return strict_decrease(arr,size,idx+1);
    }
}

int main () {
    int arr[] = {19, 12, 8, 5, 2};

    int size = sizeof(arr)/sizeof(arr[0]);

    printf("%d",strict_decrease(arr,size,1));

    return 0;
}