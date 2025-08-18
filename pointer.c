#include <stdio.h>

int main() {
    int a = 100;

    int *ptr1=&a;
    int *ptr2=&a;
    int *ptr3=&a;

    printf("Address of a: %p\n", &a);
    printf("Value of ptr1 (address): %p\n", ptr1);
    printf("Value of ptr2 (address): %p\n", ptr2);
    printf("Value of ptr3 (address): %p\n", ptr3);

    printf("Value pointed to by ptr1: %d\n", *ptr1);
    printf("Value pointed to by ptr2: %d\n", *ptr2);
    printf("Value pointed to by ptr3: %d\n", *ptr3);

    return 0;
}