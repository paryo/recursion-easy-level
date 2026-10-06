#include <stdio.h>

int linear_search(int arr[] , int size , int idx , int k) {


    if (idx == size) {

        return 0;
    }

    if (arr[idx] == k) {

        return 1;

    }

    return linear_search(arr,size,idx+1,k);
}

int main() {

    int arr[] = {10,25,5,40,15};

    int size = sizeof(arr)/sizeof(arr[0]);

    printf("%d", linear_search(arr,size,0,40));

    return 0;
}