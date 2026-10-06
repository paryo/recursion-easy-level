#include <stdio.h>

int first_idx(int arr[] , int idx , int size , int k) {

    if (idx == size) {

        return -1;
    }

    if (arr[idx] == k) {

        return idx;
    }

    return first_idx(arr,idx+1,size,k);
}

int main() {

    int arr[] = {12, 45, 7, 45, 89, 70};

    int size = sizeof(arr)/sizeof(arr[0]);

    printf("%d" , first_idx(arr , 0 ,size,7));

    return 0;
}