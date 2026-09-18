#include <stdio.h>

void print_array_reverse(int arr[] , int size) {

    if (size == 0) {

        return;
    }

    print_array_reverse(arr+1,size-1);

    printf(" %d ",arr[0]);

}

int main() {

    int arr[] = {10,20,30,40,50};

    int size = 5;

    print_array_reverse(arr,size);

    return 0;
}