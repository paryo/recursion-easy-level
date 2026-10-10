#include <stdio.h>

int array_identical(int arr1[] , int arr2[] , int size1 , int size2 , int idx) {


    if (size1 != size2) {

        return 0;
    }


    if (idx == size1) {

        return 1;

    }

    if (arr1[idx] != arr2[idx]) {

        return 0;
    }

    return array_identical(arr1,arr2,size1,size2,idx+1);
}

int main() {

    int arr1[] = {11, 23, 34, 45, 56};
    int arr2[] = {11, 23, 34, 45, 56};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("%d" , array_identical(arr1,arr2,size1,size2,0));

    return 0;
}