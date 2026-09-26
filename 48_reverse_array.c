#include <stdio.h>

void reverse_array(int arr[] , int start , int end) {

    if (start >= end) {

        return;
    }

    int temp = arr[start];

    arr[start] = arr[end];

    arr[end] = temp;


    reverse_array(arr,start+1,end-1);

}

int main() {

    int arr[] = {12,45,7,23,8};

    int size = sizeof(arr)/sizeof(arr[0]);

    reverse_array(arr,0,4);

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}