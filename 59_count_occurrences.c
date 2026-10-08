#include <stdio.h>

int count_occurrences(int arr[] , int size , int idx , int k) {

    if (idx == size) {

        return 0;
    }

    if (arr[idx] == k) {

        return 1 + count_occurrences(arr,size,idx+1,k);
    }

    else {

        return 0 + count_occurrences(arr,size,idx+1,k);
    }
}

int main() {

    int arr[] = {12,45,7,45,89,45,7};

    int size = sizeof(arr)/sizeof(arr[0]);

    printf("%d",count_occurrences(arr,size,0,45));

    return 0;
}