#include <stdio.h>

int count_grater_then_k(int arr[] , int idx , int k , int size) {

    if (idx == size) {

        return 0;
    }

    if (arr[idx] > k) {

        return 1 + count_grater_then_k(arr,idx+1,k,size);
    }

    else {

        return 0 + count_grater_then_k(arr,idx+1,k,size);
    }


}

int main() {

    int arr[] = {10,25,5,40,15};

    int size = sizeof(arr)/sizeof(arr[0]);

    printf("%d",count_grater_then_k(arr, 0,12, size));

    return 0;

}