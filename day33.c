#include <stdio.h>
struct Book {
    int book_id;
    char title[50];
    char author[50];
    float price;
};

void display(struct Book b) {
    printf("Book ID: %d\n", b.book_id);
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);
}

int main() {
    struct Book b;

    printf("Enter book_id, title, author, price:\n");
    scanf("%d %s %s %f", &b.book_id, b.title, b.author, &b.price);

    display(b);

    return 0;
}