
//array memory print in c use pointer..
#include "stdio.h"

int main() {
    int arr[8] = {23, 34, 32, 45, 67, 89, 76, 99};
    int *ptr;
    ptr = arr;

    for(int i = 0; i < 8; i++){
        printf("value: %d -> memory address: %u \n", *(ptr + i), (ptr + i));
    }
    printf("memory address of arr %u \n", ptr);
    printf("memory address of arr %u \n", arr);

return 0;
}

