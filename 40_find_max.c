#include <stdio.h>

int find_max(int arr[] , int size) {

    if (size == 1) {

        return arr[0];
    }

    int rest_max = find_max(arr+1, size-1);


    if (arr[0] > rest_max) {

        return arr[0];
    }else {

        return rest_max;
    }


}

int main() {

    int arr[] = {12,45,7,23};

    int size = sizeof(arr) / sizeof(arr[0]);

    printf("%d", find_max(arr,size));

    return 0;
}