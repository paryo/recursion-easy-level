#include <stdio.h>

void multiply_array(int arr[] , int k , int size , int idx) {
    if (idx == size) {

        return;


    }

    arr[idx] = arr[idx] *k;


    multiply_array(arr,k,size,idx+1);
}

int main() {

    int arr[] = {2,4,6,8};

    int k = 3;

    int size = sizeof(arr)/sizeof(arr[0]);

    multiply_array(arr,k,size,0);

    for (int i = 0 ; i<size;i++) {

        printf(" %d ", arr[i]);
    }

    return 0;
}