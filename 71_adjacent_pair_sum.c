#include <stdio.h>

int adjacent_pair(int arr[] , int size , int idx , int target_value) {

    if (idx == size-1) {

        return 0;
    }

    if (arr[idx] + arr[idx+1] == target_value ) {

        return 1;
    }

    else {

        return adjacent_pair(arr,size,idx+1,target_value);
    }
}

int main() {

    int arr[] = {3, 5, 2, 8, 11, 4};

    int size = sizeof(arr)/sizeof(arr[0]);

    printf("%d", adjacent_pair(arr,size,0,10));

    return 0;
}