#include <stdio.h>

void print_array_in_recursion(int arr[] , int size) {

    if (size == 0) {

        return;
    }

    printf(" %d ",arr[0]);

    print_array_in_recursion(arr+1,size-1);


}

int main() {

    int arr[] = {10,20,30,40,50};

    int size = 5;

    print_array_in_recursion(arr,size);

    return 0;
}