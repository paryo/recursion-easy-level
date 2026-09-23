#include <stdio.h>

int check_descending(int arr[] , int size) {

    if (size <=1) {

        return 1;
    }

    if (arr[0] < arr[1]) {

        return 0;
    }

    return check_descending(arr+1,size-1);
}

int main() {

    int arr[] = {50,45,30,20,10};

    int size = sizeof(arr)/sizeof(arr[0]);

    printf("%d",check_descending(arr,size));

    return 0;
}