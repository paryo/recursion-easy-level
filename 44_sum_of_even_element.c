#include <stdio.h>

int sum_of_even(int arr[], int size) {

    if (size == 0) {

        return 0;
    }

    int rest_sum = sum_of_even(arr+1,size-1);

    if (arr[0] %2 == 0) {

        return arr[0] + rest_sum;
    }

    else {

        return rest_sum;
    }


}

int main() {

    int arr[] = {12,45,7,23,8};

    int size = sizeof(arr)/sizeof(arr[0]);

    return 0;
}