#include <stdio.h>

int recursive_binary_search(int arr[], int low, int high, int k) {
    if (low > high) {
        return -1;
    }

    int mid = low + (high - low) / 2;

    if (arr[mid] == k) {

        return mid;
    }

    if (k < arr[mid]) {

        return recursive_binary_search(arr, low, mid - 1, k);

    } else {

        return recursive_binary_search(arr, mid + 1, high, k);
    }
}


int main() {
    int arr[] = {11, 23, 34, 45, 56, 67, 78, 89, 90};

    int size = sizeof(arr) / sizeof(arr[0]);

    printf("%d", recursive_binary_search(arr,0,size-1,67));


    return 0;
}
