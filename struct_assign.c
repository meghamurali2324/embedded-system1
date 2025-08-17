#include <stdio.h>

struct Book {
    char title[51]; // 50 characters + 1 for null terminator
    char author[31]; // 30 characters + 1 for null terminator
    float price;
};

int main() {
    struct Book books[3]; // Array to store details of 3 books
    struct Book mostExpensiveBook;

    // Read details for 3 books from the user
    for (int i = 0; i < 3; i++) {
        printf("Enter details for Book %d:\n", i + 1);
        printf("Title : ");
        scanf("%s", books[i].title); // Reads a single word, use %49s to prevent overflow
        printf("Author : \n");
        scanf("%s", books[i].author); // Reads a single word, use %29s to prevent overflow
        printf("Price: \n");
        scanf("%f", &books[i].price);
    }

    // Find the most expensive book
    mostExpensiveBook = books[0]; // Initialize with the first book
    for (int i = 1; i < 3; i++) {
        if (books[i].price > mostExpensiveBook.price) {
            mostExpensiveBook = books[i];
        }
    }

    // Print the details of the most expensive book
    printf("\nDetails of the Most Expensive Book:\n");
    printf("Title: %s\n", mostExpensiveBook.title);
    printf("Author: %s\n", mostExpensiveBook.author);
    printf("Price: %.2f\n", mostExpensiveBook.price);

    return 0;
}