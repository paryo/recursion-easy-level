#include <stdio.h>

int alternating_sum(int arr[] , int size , int sign , int idx) {

    if (idx == size) {

        return 0;
    }

    return (arr[idx]*sign) + alternating_sum(arr,size,-sign,idx+1);
}

int main() {

    int arr[] = {10, 3, 5, 2, 8};

    int size = sizeof(arr)/sizeof(arr[0]);

    printf("%d", alternating_sum(arr,size,1,0));

    return 0;
}
