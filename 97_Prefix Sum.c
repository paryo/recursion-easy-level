#include <stdio.h>


int prefix_sum(int arr[] , int k) {

    if (k == 0) {

        return arr[k];
    }

        return arr[k] + prefix_sum(arr , k-1);

}

int main() {

    int arr[] = {3,1,4,2,5};

    int k = 3;

    printf("%d", prefix_sum(arr,k));

    return 0;
}