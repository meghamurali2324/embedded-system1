#include <stdio.h>

int main() {
    int arr[] = {10, 15, 20, 25, 30}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    int *ptr = arr; 
    for (int i = 0; i < size; i++) {
        printf("Element %d: Address = %p, Value = %d\n", i, (void *)(ptr + i), *(ptr + i));
    }

    return 0;
}