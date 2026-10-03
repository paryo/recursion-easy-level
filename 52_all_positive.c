    #include <stdio.h>

    int all_positive(int arr[] , int size , int idx) {

        if (idx == size) {

            return 1;
        }

        if (arr[idx] <0) {

            return 0;
        }

        return all_positive(arr,size,idx+1);


    }

    int main() {

        int arr[] = {5,12,8,30};

        int size = sizeof(arr)/sizeof(arr[0]);

        printf("%d", all_positive(arr,size,0));


        return 0;
    }