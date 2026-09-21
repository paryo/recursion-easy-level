#include <stdio.h>

int even_count(int arr[] , int size) {

    if (size == 0) {

        return 0;
    }

    int rest_count = even_count(arr+1,size-1);

    if (arr[0] %2 == 0) {

        return 1+rest_count;
    }
    else {

        return rest_count;
    }
}

int main() {

    int arr[] = {12,45,7,23,8};

    int size = sizeof(arr)/sizeof(arr[0]);

    printf("%d",even_count(arr,size));

    return 0;
}