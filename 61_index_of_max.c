#include <stdio.h>

int index_of_max(int arr[] , int size , int idx) {

    if (idx == size-1) {

        return idx;
    }

    int max_idx_rest = index_of_max(arr, size , idx+1);

    if (arr[idx] > arr[max_idx_rest]) {

        return idx;
    }

    else {
        return max_idx_rest;
    }
}

int main() {

    int arr[] = {12, 45, 89, 23, 67};

    int size = sizeof(arr)/sizeof(arr[0]);

    printf("%d",index_of_max(arr,size,0));



    return 0;
}