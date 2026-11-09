#include <stdio.h>

int all_odd_elements(int arr[] , int size , int i) {

    if (i >= size) {

        return 1;
    }

    if (arr[i] %2 == 0) {

        return 0;
    }

    return all_odd_elements(arr ,size , i+1);
}

int main() {

    int arr[] = {15, 7, 23 , 9, 31};

    int size = sizeof(arr)/sizeof(arr[0]);

    printf("%d", all_odd_elements(arr,size,0));

    return 0;
}