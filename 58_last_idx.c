#include <stdio.h>

int last_idx(int arr[] , int size , int k , int idx) {


    if (idx <0) {

        return -1;
    }

    if (arr[idx] == k) {

        return idx;
    }

    return last_idx(arr,size,k,idx-1);
}

int main() {

    int arr[] = {12, 45, 7, 45, 89, 7};

    int size = sizeof(arr)/sizeof(arr[0]);

    printf("%d", last_idx(arr,size,45,size-1));

    return 0;
}