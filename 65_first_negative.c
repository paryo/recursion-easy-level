#include <stdio.h>

int first_negative(int arr[] , int size , int idx) {

    if (idx == size) {

        return -1;
    }

    if (arr[idx] < 0) {

        return idx;
    }

    else {

        first_negative(arr,size,idx+1);
    }
}

int main() {

    int arr[] = {12, 45, 3, 89, -15, 67};

    int size = sizeof(arr)/sizeof(arr[0]);

    printf("%d",first_negative(arr,size,0));

    return 0;

}