#include <stdio.h>

int check_fixed_point(int arr[] , int size , int idx) {


    if (idx == size) {

        return 0;
    }

    if (arr[idx] == idx) {

        return 1;
    }

    else {

        return check_fixed_point(arr,size ,idx+1);
    }

}

int main() {

    int arr[] = {-2, 0, 2, 5, 7};

    int size = sizeof(arr)/sizeof(arr[0]);

    printf("%d", check_fixed_point(arr,size,0));

    return 0;
}
