#include <stdio.h>

int find_min(int arr[] , int size) {

    if (size == 1) {

        return arr[0];
    }

    int rest_recursive_call = find_min(arr+1 , size-1);


    if (arr[0] < rest_recursive_call) {

        return arr[0];

    } else {

        return rest_recursive_call;

    }


}

int main() {

    int arr[] = {12,45,7,23};

    int size = sizeof(arr)/sizeof(arr[0]);

    printf("%d", find_min(arr,size));

    return 0;
}