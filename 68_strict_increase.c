#include <stdio.h>

int strict_increase(int arr[] , int idx , int size) {

    if (idx == size) {

        return 1;
    }

    if (arr[idx] <= arr[idx-1]) {

        return 0;
    }

    else {

        return strict_increase(arr,idx+1,size);
    }


}

int main() {

    int arr[] = {2,5    ,8,12,19};

    int size = sizeof(arr)/sizeof(arr[0]);

   printf("%d",  strict_increase(arr,1,size));

    return 0;
}