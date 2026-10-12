    #include <stdio.h>

    int palindrome_check(int arr[] , int start , int end ) {

        if (start >= end) {

            return 1;
        }

        if (arr[start] != arr[end]) {

            return 0;
        }

        else {

            return palindrome_check(arr,start+1,end-1);
        }
    }

    int main() {


        int arr[] = {1,2,3,2,1};

        int size = sizeof(arr)/sizeof(arr[0]);

        printf("%d",palindrome_check(arr,0,size-1));

    }