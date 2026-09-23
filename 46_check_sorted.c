#include <stdio.h>

int check_sorted(int arr[] , int size) {

    if (size <=1) {

        return 1;
    }

    if (arr[0] > arr[1]) {

        return 0;
    }

    return check_sorted(arr+1,size-1);


}


int main() {

    int arr[] = {10,20,30,45,50};

    int size = sizeof(arr)/sizeof(arr[0]);

    printf("%d",check_sorted(arr,size));

    return 0;
}