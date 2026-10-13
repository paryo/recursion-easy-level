#include <stdio.h>

int first_odd(int arr[] , int size , int idx) {

    if (idx == size) {

        return -1;
    }

    if (arr[idx] %2!= 0) {

        return idx;
    }

    else {

        return first_odd(arr,size,idx+1);
    }
}

int main() {

    int arr[] = {2,4,6,7,8,9};

    int size = sizeof(arr)/sizeof(arr[0]);

    printf("%d",first_odd(arr,size,0));

    return 0;
}