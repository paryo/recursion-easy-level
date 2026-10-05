#include <stdio.h>

int count_smaller_then_k(int arr[] , int k , int size , int idx) {

    if (idx == size) {

        return 0;
    }

    if (arr[idx] < k) {

        return 1+ count_smaller_then_k(arr,k,size,idx+1);
    }
    else {

        return 0 + count_smaller_then_k(arr,k,size,idx+1);
    }

}

int main() {

    int arr[] = {10, 25, 5, 40, 15};

    int size = sizeof(arr)/sizeof(arr[0]);

    int k = 12;

    printf("%d",count_smaller_then_k(arr,k,size,0));

    return 0;
}