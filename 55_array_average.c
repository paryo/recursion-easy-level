#include <stdio.h>

int array_average(int arr[] , int size , int idx) {

    if (idx == size) {

        return 0;
    }

    return arr[idx] + array_average(arr,size,idx+1);



}

int main() {

    int arr[] = {10,20,30,40,50};

    int size = sizeof(arr)/sizeof(arr[0]);

    int total = array_average(arr,size,0);

    double average = (double)total/size;

    printf("Sum = %d\n", total);
    printf("Average = %.2f\n", average);

    return 0;
}