#include <stdio.h>

void replace_negative(int arr[] , int idx , int size) {

    if (idx == size) {

        return;

    }

    if (arr[idx] <0) {

        arr[idx] = 0;
    }

    replace_negative(arr,idx+1,size);


}


int main() {

    int arr[] = {12, -5, 7, -19, 0, -3};

    int size = sizeof(arr)/sizeof(arr[0]);

    replace_negative(arr,0,size);

    for (int i = 0 ;i < size ; i++) {

        printf(" %d ", arr[i]);
    }

    return 0;


}