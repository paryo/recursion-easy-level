#include <stdio.h>


void copy_array(int arr_1[] , int arr_2[], int size , int idx) {


    if (idx == size) {

        return;
    }


    arr_2[idx]= arr_1[idx];

    copy_array(arr_1,arr_2, size,idx+1);


}

int main() {

    int arr_1[] = {10,20,30,40,50};

    int arr_2[5];

    int size = sizeof(arr_1)/sizeof(arr_1[0]);

    copy_array(arr_1,arr_2,size,0);

    for (int i =0 ; i<size ; i++) {

        printf(" %d ", arr_2[i]);
    }


    return 0;
}