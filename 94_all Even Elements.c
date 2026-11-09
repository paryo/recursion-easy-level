#include <stdio.h>

int all_even_element(int arr[] , int size , int i) {

    if (i >= size) {

        return 1;
    }

    if (arr[i] %2 != 0) {

        return 0;
    }



    return all_even_element(arr,size,i+1);


}

int main() {

    int arr[] = {10, 24, 6, 8, 42};

    int size = sizeof(arr)/sizeof(arr[0]);

    printf("%d",all_even_element(arr,size,0));

    return 0;
}