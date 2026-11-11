#include <stdio.h>

int strictly_increasing_Seq(int arr[] , int size , int i) {

    if (i >= size-1) {

        return 0;
    }

    if (arr[i+1] > arr[i]) {

       return  1 + strictly_increasing_Seq(arr,size , i+1);
    }

    else {

       return  0 + strictly_increasing_Seq(arr,size,i+1);
    }


}


int main() {

    int arr[] = {1, 3, 2, 4, 5};

    int size = sizeof(arr)/sizeof(arr[0]);

    printf("%d", strictly_increasing_Seq(arr,size,0));

    return 0;
}