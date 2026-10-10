#include <stdio.h>

int idx_of_min(int arr[] , int size , int idx) {


    if (idx == size-1) {

        return idx;
    }

    int min_idx_rest = idx_of_min(arr , size , idx+1);

    if (arr[idx] < arr[min_idx_rest]) {

        return idx;
    }
    else {

        return min_idx_rest;
    }
}

int main() {

    int arr[] = {67, 23, 12, 89, 45};

    int size = sizeof(arr)/sizeof(arr[0]);

    printf("%d",idx_of_min(arr,size,0));

    return 0;
}