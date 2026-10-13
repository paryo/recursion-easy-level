#include <stdio.h>

int first_even(int arr[] , int size , int idx) {

    if (idx == size) {

        return -1;
    }

    if (arr[idx] %2 == 0) {

        return idx;
    }
    else {

        return first_even(arr,size,idx+1);
    }
}

int main() {

    int arr[] = {13, 45, 8, 89, 22, 67};

    int size = sizeof(arr)/sizeof(arr[0]);

    printf("%d",first_even(arr,size,0));

    return 0;
}