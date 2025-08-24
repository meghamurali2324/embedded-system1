#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int i, n, new_n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory using malloc
    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Resize the memory block
    printf("Enter new size: ");
    scanf("%d", &new_n);

    arr = (int *)realloc(arr, new_n * sizeof(int));

    if (arr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // Input new elements if size increased
    if (new_n > n) {
        printf("Enter %d more integers:\n", new_n - n);
        for (i = n; i < new_n; i++) {
            scanf("%d", &arr[i]);
        }
    }

    // Display all elements
    printf("The final array is:\n");
    for (i = 0; i < new_n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the memory
    free(arr);

    return 0;
}
