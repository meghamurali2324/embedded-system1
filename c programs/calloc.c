#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory and initialize all elements to 0
    arr = (int *)calloc(n, sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Display the initialized array
    printf("Initialized array using calloc:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // Will print all 0s
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}
