#include <stdio.h>

int count_multiples(int arr[] , int size , int idx , int k) {

    if (idx == size) {

        return 0;
    }

    if (arr[idx] %k == 0) {

       return  1 + count_multiples(arr,size,idx+1,k);
    }

    else {

        return 0 + count_multiples(arr,size,idx+1,k);
    }


}

int main() {

    int arr[] = {10, 25, 100, 45, 50, 13};

    int size = sizeof(arr)/sizeof(arr[0]);

    printf("%d", count_multiples(arr,size,0,10));

    return 0;
}