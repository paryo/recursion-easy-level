#include <limits.h>
#include <stdio.h>

int max1 = INT_MIN;

int max2 = INT_MIN;


int find_second_larget(int arr[] , int size , int i) {

    if (i >= size) {

        return 0;
    }

    if (arr[i] > max1) {

        max2 = max1;

        max1 = arr[i];
    }

    else {

        if (arr[i] > max2 && arr[i] != max1) {

            max2 =arr[i];
        }


    }


    return find_second_larget(arr,size , i +1);




}

int main() {

    int arr[] = {10, 50, 20, 40, 60, 30};

    int size = sizeof(arr)/sizeof(arr[0]);

    printf("%d",find_second_larget(arr,size,0));

    printf("Second Largest Element = %d \n", max2);


    return 0;
}