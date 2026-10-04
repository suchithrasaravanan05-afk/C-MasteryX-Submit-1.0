#include <stdio.h>

struct Book {
    char title[100];
    char author[50];
    float price;
};

int main() {
    struct Book b;

    printf("Enter book title: ");
    scanf(" %[^\n]", b.title);
    printf("Enter author name: ");
    scanf(" %[^\n]", b.author);
    printf("Enter price: ");
    scanf("%f", &b.price);

    printf("\n--- Book Details ---\n");
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: $%.2f\n", b.price);

    return 0;
}
