#include <limits.h>
#include <stdio.h>



int min1 = INT_MAX;

int min2 = INT_MAX;


int second_smallest(int arr[] , int size , int i) {


    if (i >= size) {

        return 0;
    }

    if (arr[i] < min1) {

        min2 = min1;

        min1 = arr[i];
    }

    else {

        if (arr[i] < min2 && arr[i] != min1) {

            min2 = arr[i];
        }


    }

    return second_smallest(arr ,size,i+1);
}

int main () {

    int arr[] = {40, 10, 30, 20, 60, 50};

    int size = sizeof(arr) / sizeof(arr[0]);

    printf("%d", second_smallest(arr ,size ,0));

    printf("second smallest element = %d", min2);



    return 0;


}